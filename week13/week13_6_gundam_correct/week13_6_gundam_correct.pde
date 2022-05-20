PShape gundam;
void setup()
{
  size(500, 500, P3D);
  gundam = loadShape("Gundam.obj");
}
void draw()
{
  background(#FFFFAD);
  translate(250,500);
  scale(18,-18,18);//x,y,z
  rotateY(radians(frameCount));
  shape(gundam);
}
