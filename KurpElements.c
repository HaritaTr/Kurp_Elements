#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164

int main()
{
	setlocale(LC_ALL, "Turkish");

	double R, Delta;
	double T, L, BS, X, Y, S;

		/// Bilinenleri isteyelim.
	/* R; Kurbun yarıçapı (proje mühendisi olan harita mühendisi veya inşaat mühendisi tarafınca belirlenir.)
	Δ; Some noktası açı değeri (Projeden hesaplanır) */
	printf("Kurbun yarıçapı (R) (Kurbun yarıçapı) değerini giriniz: ");
	scanf("%lf", &R);
	printf("Some noktası açı değeri (Δ) (grad) değerini giriniz: ");
	scanf("%lf", &Delta);
	//Delta = (((PI) * R) / 400) * Delta;

		// Bilinmeyenlerin hesaplanması;
	printf("\n\t=== Hesap sonuçları! === \n");
	/// Kurp asal Elemanlarının hesaplanması
	/* Teğet boyu (tanjant) hesaplanır
	T = R * tan(Δ / 2); */
	T = R * tan((((PI) * R) / 400) * Delta / 2);
	printf("Teğet boyu (tanjant) (m) değeri: %f\n", T);
	/* L developman boyu hesaplanır
	L = ((2 * (PI) * R) / 400) * Δ; */
	L = ((2 * (PI) * R) / 400) * Delta;
	printf("L developman boyu (m) değeri: %f\n", L);
	/* BS bisektris hesaplanır
	BS = (R / cos(Δ / 2)) - R; */
	BS = (R / cos((((PI) * R) / 400) * Delta / 2)) - R;
	printf("BS bisektris (m) değeri: %f\n", BS);
	/* Bisektris noktasının dik koordinat sistemine göre (X, Y, S) koordinatları
	X = R * sin(Δ / 2);
	Y = R * (1 - cos(Δ / 2));
	S = 2 * R * sin(Δ / 4); */
	X = R * sin((((PI) * R) / 400) * Delta / 2);
	Y = R * (1 - cos((((PI) * R) / 400) * Delta / 2));
	S = 2 * R * sin((((PI) * R) / 400) * Delta / 4);
	printf("Bisektris noktasının X (m) değeri: %f\n", X);
	printf("Bisektris noktasının Y (m) değeri: %f\n", Y);
	printf("Bisektris noktasının S (m) değeri: %f\n", S);

	return 0;
}
