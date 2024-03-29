void setup(){//設定，只做一次
  size(400,200);
}
float start=0,v=0,x=0;//v是旋轉的速度
void mousePressed(){
  v=random(1);
}
void draw(){//畫，每秒畫60次
  background(#C8E8F5);
  if(v>0.001){//速度很慢時，就不要再轉動了
    start += v;//位置、速度、加速度(位置 會加上 速度)
    v *= 0.99;//摩擦力，會讓速度變慢，位置、速度、加速度(位置 會加上 速度)
    x+=v*3;//另外一個會移動的方塊，來玩夜市推推樂
  }
  //if (start<10) start+=0.01;
  rect(x,150,50,50);
  fill(255);text(start,200,150);text(v,200,170);
  for(int i=0;i<24;i++){
      float shift=2*PI*i/24.0;
      if(i%3==0)fill(0);
      if(i%3==1)fill(#F5E874);
      if(i%3==2)fill(255);
      if(i==0) fill(#FAA505);
      arc(100,100,180,180,shift+0+start,shift+PI/12+start);//畫出 圓弧
  //   圓心  寬，高,開始,結束
  }
}

