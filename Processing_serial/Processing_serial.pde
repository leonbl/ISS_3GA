import processing.serial.*;

Serial vrata;
float r,g,b;

void setup(){
 size(200,200);
 println((Object[])Serial.list());
 vrata = new Serial(this, Serial.list()[1],9600);
}

void draw(){
  background(r,g,b);
}

void mousePressed(){
  r=random(255);
  g=random(255);
  b=random(255);
  vrata.write('#');
  vrata.write(str((int)r));
  vrata.write(',');
  vrata.write(str((int)g));
  vrata.write(',');
  vrata.write(str((int)b));
}
