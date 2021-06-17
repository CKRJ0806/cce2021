float x=100,y=100,vx=0,vy=0;
void draw(){//每秒60次,等速、順
  background(#DAE4F2);
  rect(x,y,50,50);//畫方塊
  x+=vx;
}//每秒60次,等速、順
void keyPressed(){
  if(keyCode==LEFT) vx=-1;
  if(keyCode==RIGHT) vx=+1;
}
void keyReleased(){
  vx=0;
}
