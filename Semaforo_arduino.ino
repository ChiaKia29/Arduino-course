
const int ledRosso=11;
const int ledGiallo=10;
const int ledVerde=9;

void setup() {
 
pinMode (ledRosso, OUTPUT);
pinMode (ledGiallo, OUTPUT);
pinMode (ledVerde, OUTPUT);

}

void loop() {
 digitalWrite (ledRosso,HIGH) ;
 delay (2000) ;
  digitalWrite (ledRosso,LOW) ;
 digitalWrite (ledGiallo,HIGH) ;
 delay (1000) ;
 digitalWrite (ledGiallo,LOW) ;
 digitalWrite (ledVerde,HIGH) ;
 delay (2000) ;
 digitalWrite (ledVerde,LOW) ;

}
