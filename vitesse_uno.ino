int btn = A0;
int led = 12;
long cont = 0;
int val = false;
void setup() {
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(btn) == 1) {
    delay(50);
    val=true;
  }
  if(val==true){
    cont += 1;
  }
  if (cont == 1000000) {
    digitalWrite(led, HIGH);
    val=false;
  }
}
