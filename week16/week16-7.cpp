void setup(){//�]�w�A�u���@��
  size(400,200);
}
float start=0,v=0.07;//v�O���઺�t��
void draw(){//�e�A�C��e60��
  background(#C8E8F5);
  if(v>0.001){//�t�׫ܺC�ɡA�N���n�A��ʤF
    start += v;//��m�B�t�סB�[�t��(��m �|�[�W �t��)
    v *= 0.99;//�����O�A�|���t���ܺC�A��m�B�t�סB�[�t��(��m �|�[�W �t��)
  }
  //if (start<10) start+=0.01;
  fill(255);text(start,200,150);text(v,200,170);
  for(int i=0;i<24;i++){
      float shift=2*PI*i/24.0;
      if(i%3==0)fill(0);
      if(i%3==1)fill(#F5E874);
      if(i%3==2)fill(255);
      if(i==0) fill(#FAA505);
      arc(100,100,180,180,shift+0+start,shift+PI/12+start);//�e�X �꩷
  //   ���  �e�A��,�}�l,����
  }
}
