void setup(){
  size(400,300);
}
int x=100, y=150, x2=300, y2=150;
int vx=0, vy=0, vx2=0, vy2=0; //移動速度
void draw (){
  background (#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
  x += vx; y += vy; //更新位置
  x2 += vx2; y2 += vy2; //更新位置
}
void keyPressed(){ //一次一鍵
  if(key == 'w') vy -= 2;
  if(key == 'a') vx -= 2;
  if(key == 's') vy += 2;
  if(key == 'd') vx += 2;
  if(keyCode == UP) vy2 -= 2;
  if(keyCode == DOWN) vy2 += 2;
  if(keyCode == LEFT) vx2 -= 2;
  if(keyCode == RIGHT) vx2 += 2;
}
