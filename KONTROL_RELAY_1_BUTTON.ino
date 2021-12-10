//penegenalan pin
int relay = D1;
int sw1   = D2;
int sw1State = 0;

void setup() {
  // program setup
  pinMode (sw1, INPUT);
  pinMode (relay, OUTPUT);
}

void loop() {
  // program perulangan
  sw1State = digitalRead (D2);
   if (sw1State == 0) {
    digitalWrite (relay, HIGH); //relay nyala
   }
   else { //ketika switch dilepas
    digitalWrite (relay, LOW); //relay mati
   }
}
//PROJECT : Program Kontrol Relay 1 Button
//DIBUAT  : TRIDIPI.PROJECT
//TANGGAL : 07/12/2021
