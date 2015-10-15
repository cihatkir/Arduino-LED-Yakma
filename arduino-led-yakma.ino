/*
*******************************************************************************************
**                                                                                       **
**                            Arduino ile ilk proje                                      **
**                                 LED Yakma                                             **
**                                                                                       **
**                                                                                       **
**                                   Cihat                                               **
**                                                                                       **
*******************************************************************************************
*/

const int LED=9;  //Led'in bağlı olduğu Arduino Pin'i 

void setup() {
pinMode(LED, OUTPUT); //LED'in çıkış pini olduğunu belirtiyoruz.
}

void loop() {
  digitalWrite(LED, HIGH); //HIGH komutu ile LED'i yakıyoruz.
}
