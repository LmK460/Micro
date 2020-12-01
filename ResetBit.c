//deve ser passado os parametros para execução da função
// o valor do bit a ser lido deve estar entre 0 e 7

int ReadBit(unsigned char a, int bit) {
    unsigned char mascara;
    if(bit>=0 && bit<=7){
      mask = (0x01<<bit);
      a = a & mask;
      if (a<0 )
          return 0;
      else
          return 1;
     }
     //error
     return -1
}
