
/*  Mariano Fernández Abadía
    SB IEEE UPCT
    Ejemplo 0 Curso Arduino
    Nota: Basado en el Código de Antonio Guillermo Pérez Coronilla
*/

const int spk = 9; // Pin del altavoz.

const int c[5] = {131, 262, 523, 1046, 2093}; // frecuencias 4 octavas de Do
const int cs[5] = {139, 277, 554, 1108, 2217}; // Do#
const int d[5] = {147, 294, 587, 1175, 2349}; // Re
const int ds[5] = {156, 311, 622, 1244, 2489}; // Re#
const int e[5] = {165, 330, 659, 1319, 2637}; // Mi
const int f[5] = {175, 349, 698, 1397, 2794}; // Fa
const int fs[5] = {185, 370, 740, 1480, 2960}; // Fa#
const int g[5] = {196, 392, 784, 1568, 3136}; // Sol
const int gs[5] = {208, 415, 831, 1661, 3322}; // Sol#
const int a[5] = {220, 440, 880, 1760, 3520}; // La
const int as[5] = {233, 466, 932, 1866, 3729}; // La#
const int b[5] = {247, 494, 988, 1976, 3951}; // Si

void nota(int a, int b);            // declaración de la función auxiliar. Recibe dos números enteros.
void playHarryPotter(); // Toca Harry Potter
void playImperialMarch(); // Toca la marcha imperial
void playStarWars(); // Toca Star Wars
void playTwoWaters(); // Toca "Entre dos aguas"

void setup()
{
  playTwoWaters();
}

void nota(int frec, int t)
{
  tone(spk, frec);     // suena la nota frec recibida
  delay(t);            // para despues de un tiempo t
  noTone(spk);
}

void loop()
{
}

void playStarWars()
{
  // Star Wars
  nota(d[1], 150);
  delay(50);
  nota(d[1], 150);
  delay(50);
  nota(d[1], 150);
  delay(50);
  nota(g[1], 900);
  delay(150);
  nota(d[2], 900);
  delay(50);
  nota(c[2], 150);
  delay(50);
  nota(b[1], 150);
  delay(50);
  nota(a[1], 150);
  delay(50);
  nota(g[2], 900);
  delay(150);
  nota(d[2], 900);
  delay(100);
  nota(c[2], 150);
  delay(50);
  nota(b[1], 150);
  delay(50);
  nota(a[1], 150);
  delay(50);
  nota(g[2], 900);
  delay(150);
  nota(d[2], 900);
  delay(100);
  nota(c[2], 150);
  delay(50);
  nota(b[1], 150);
  delay(50);
  nota(c[2], 150);
  delay(50);
  nota(a[1], 1200);
  delay(2000);
}

void playImperialMarch()
{
  // Imperial March
  nota(g[2], 500);
  delay(100);
  nota(g[2], 500);
  delay(100);
  nota(g[2], 500);
  delay(100);
  nota(ds[2], 500);
  delay(1);
  nota(as[2], 125);
  delay(25);
  nota(g[2], 500);
  delay(100);
  nota(ds[2], 500);
  delay(1);
  nota(as[2], 125);
  delay(25);
  nota(g[2], 500);
  delay(2000);
}

void playTwoWaters()
{
  /**********************/
  /*     entre dos aguas*/
  /**********************/
  nota(a[1], 400);
  delay(400);
  nota(e[1], 400);
  delay(400);
  nota(a[1], 400);
  delay(200);
  nota(e[1], 200);
  delay(200);
  nota(a[1], 200);
  delay(200);
  nota(as[1], 100);
  delay(100);
  nota(b[1], 400);
  delay(400);
  nota(fs[1], 400);
  delay(400);
  nota(b[1], 400);
  delay(200);
  nota(fs[1], 200);
  delay(200);
  nota(b[1], 200);
  delay(200);
  nota(as[1], 100);
  delay(100);
  nota(a[1], 400);
  delay(400);
  nota(e[1], 400);
  delay(400);
  nota(a[1], 400);
  delay(400);
}


void playHarryPotter()
{
  // Harry Potter
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(e[3], 1000);
  nota(b[3], 500);
  nota(a[3], 1250);
  nota(fs[3], 1000);
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(d[3], 1000);
  nota(e[3], 500 );
  nota(b[2], 1000 );
  delay(1000); // Silencio
  nota(b[2], 500);
  nota(e[3], 1000);
  nota(g[3], 250);
  nota(fs[3], 250);
  nota(e[3], 1000);
  nota(b[3], 500);
  nota(d[4], 1000);
  nota(cs[4], 500);
  nota(c[4], 1000);
  nota(a[3], 500);
  nota(c[4], 1000);
  nota(b[3], 250);
  nota(as[3], 250);
  nota(b[2], 1000);
  nota(g[3], 500);
  nota(e[3], 1000);
  delay(2000);
}


