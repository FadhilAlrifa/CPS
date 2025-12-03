float x = 0;
float y = 0;
float vx = 0;
float vy = 0;
float ax = 0;
float ay = 0;
float dt = 0.05; // 50 ms

void setup(){
  Serial.begin(9600);
}
void loop (){
  if (Serial.available()){
    char c = Serial.read();
    if (c ==  'w'){
      ay += 0.5;}
    else if (c == 's'){
      ay = -0.5;
    }
    else if (c == 'a'){
      ax -= 0.5;
    }
    else if (c == 'd'){
      ax += 0.5;
    }
  }


vx = vx + ax * dt;
vy = vy + ay * dt;
x = x + vx * dt;
y = y + vy * dt;

Serial.print("\tx:");
Serial.print(x);
Serial.print("\ty:");
Serial.println(y);
Serial.print("Kecepatan vx = ");
Serial.print(vx);
Serial.print("\tKecepatan vy = ");
Serial.print(vy);
delay (50);
}