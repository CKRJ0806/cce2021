void setup(){//�}�s��
  size(1024,400);
}
void draw(){
    background(#3E8DF7);//��X
    int s=second();//Valus from 0-59
    int m=minute();//Valus from 0-59
    int h=hour();//Valus from 0-23
    textSize(80);
    text(h + ":" + m +  ":"+ s ,100,200);
}    // �Ʀr �r�� �Ʀr �r�� �Ʀr
