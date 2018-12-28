
class elemento
{
    
      
    public:
      
      int x;
      int y;
      int peso;
      elemento(int a, int b){
        x=a;
        y=b;
      }
      
      elemento(int a, int b, int c){
        x=a;
        y=b;
        peso=c;
      }
      
      elemento(){}
      
      int get_1(void){
        return x;
      }
      
      int get_2(void){
        return y;
      }
      
      int equal( elemento a){
        if((x==a.get_1())&&(y==a.get_2())&&(peso==a.peso))
          return 1;
        else
            return 0;
      }
      
};


//____________________________________________________________________ ordenacion

template <class elemento>
void burbuja(std::vector<elemento>& a,int N){
    for(int k=0;k<N;k++){
        for(int i=N-1;i>k;i--){
            if(a[i-1].peso>a[i].peso){
              //std::cout << a[i-1].peso<<" "<<a[i].peso<< std::endl;
                elemento aux;
                aux=a[i-1];
                
                a[i-1]=a[i];
                
                a[i]=aux;
            }
        }
        
    }
    
    
}

//___-________________________________________________________7


 void podar(int x, int y,std::list<elemento>& lista){
        int k=0;
        while(k==0){
            k=0;
            //vecino a comprobar
            int b=lista.front().get_1();
            int a=lista.front().get_2();
            lista.pop_front();
            if((x==a)&&(y==(b-1))){ //vecino occidente
                lista.push_front(elemento(a,b));
                k=1;
            }
            
            
            if((x==a)&&(y==(b+1))){ //vecino de oriente
                lista.push_front(elemento(a,b));
                k=1;
            }
            
            
            if((x==(a-1))&&(y==b)){ //vecino del norte
                lista.push_front(elemento(a,b));
                k=1;
            }
            
            
            if((x==(a+1))&&(y==b)){ //vecino del sur
                lista.push_front(elemento(a,b));
                k=1;
            }
            
        }
    }
    
//__________________________________________________________________________

bool no_existe(std::list<elemento> lista ,int a ,int b, std::list<elemento> visitados){
  int k=0;
  for(elemento n: lista){
    if((n.get_1()==a)&&(n.get_2()==b)){
      k=1;
    }
  }
  for(elemento n: visitados){
    if((n.get_1()==a)&&(n.get_2()==b)){
      k=1;
    }
  }
  return k;
  
}















