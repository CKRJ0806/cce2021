void setup(){//只做一次的設定
  size(1024,400);
}
void draw(){///互動版本，每秒畫60次
  if( mousePressed)background(0,255,255);///按下去時，亮淡藍色
  else background(203,225,242);//否則，淺藍色
  textSize(80);//文字的大小
  text("中文壞掉Now a is:"+a,212,200); //畫出文字
}//目標:文字全系列都教一下!!!!大小
int a=0;
void mousePressed(){
  a++;
}
