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
    int total=s + 60*m + 60*60*h;//�`���
    int closeH=17,closeM=40,closeS=0;//�U�Ҫ���Ǯɶ�
    int total2=closeS + 60*closeM +60*60*closeH;//�ؼ��`���
    int ans=total2-total;
    text("�ѤU�X��:"+ans,100,100);
}    // �Ʀr �r�� �Ʀr �r�� �Ʀr
