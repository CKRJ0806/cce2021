void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫，每秒畫60次
  background(#C8E8F5);
  fill(225);
  ellipse(50,50,80,80);
      //  圓心  寬，高
  fill(225,0,0);
  float stop=mouseX/50.0;
  text(stop,100,100);//畫出字
  arc(50,50,80,80,0,stop);//畫出 圓弧
  //   圓心  寬，高,開始,結束
}

