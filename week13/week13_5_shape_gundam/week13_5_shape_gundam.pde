PShape gundam;
void setup()//P語言為Java的變形
{
  size(500,500,P3D);//有P語言的3D功能
  gundam = loadShape("Gundam.obj");
}
void draw()
{
  background(#FFFFAD);
  translate(250,0,0);
  scale(20,20,20);//x,y,z
  shape(gundam);
}
