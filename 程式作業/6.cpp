void setup(){//秨穝
  size(1024,400);
}
void draw(){
    background(#3E8DF7);//︹絏
    int s=second();//Valus from 0-59
    int m=minute();//Valus from 0-59
    int h=hour();//Valus from 0-23
    textSize(80);
    text(h + ":" + m +  ":"+ s ,100,200);
    int total=s + 60*m + 60*60*h;//羆计
    int closeH=17,closeM=40,closeS=0;//揭弘非丁
    int total2=closeS + 60*closeM +60*60*closeH;//ヘ夹羆计
    int ans=total2-total;
    text("逞碭:"+ans,100,100);
}    // 计 ﹃ 计 ﹃ 计
