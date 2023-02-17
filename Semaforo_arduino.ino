
const int ledRosso=9;
const int ledGiallo=10;
const int ledVerde=11;

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
