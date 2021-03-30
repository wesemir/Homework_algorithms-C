
#define RAZMER 10

typedef struct {
    int pr;
    int dat;
}Node;

Node* mass[RAZMER];
int Verh;
int Hvost;
int Predmeti;

void init(){
    for (int i = 0; i < RAZMER;++i){
        mass[i]=NULL;
    }
    Verh = 0;
    Hvost = 0;
    Predmeti = 0;
}

void ins(int pr, int dat){
    Node *node = (Node*) malloc((sizeof(Node)));
    node->dat = dat;
    node->pr = pr;
    int flag;
    if(Predmeti == 0){
        mass[Hvost++] = node;
        Predmeti++;
    } else if(Predmeti == RAZMER){
        printf("%s /n", "Queue is full");
        return;
    }else{
        int i = 0;
        int idx = 0;
        Node *tmp;
        for( i = Verh; i < Hvost; ++i)
        {
            idx = i % RAZMER;
            if (mass[idx]-> pr > pr)
                break;
            else idx++;
        }
        flag = idx % RAZMER;
        i++;
        tmp = mass[idx];
        mass[idx] = mass[flag];
        mass[flag] = tmp;
        i++;
    }
    mass[flag] = node;
    Predmeti++;
    Hvost++;
}

Node* rem(){
    if (Predmeti == 0){
        return NULL;
    } else{
        int idx = Verh++ % RAZMER;
        Node *tmp = mass[idx];
        mass[idx] = NULL;
        Predmeti--;
        return tmp;
    }
}

/// <summary>
/// ///////////////////////////////////////////////////////////
/// </summary>
const int RAZMER2 =(RAZMER2of(int))*8;

int bits[RAZMER2];

int cursor = -1;
int Stack[RAZMER2];

bool push(int data){
    if (cursor<RAZMER2){
        Stack[++cursor] = data;
        return true;
    } else {
        printf("%s \n", "Stack overflow");
        return false;
    }
}

int pop() {
    if (cursor!= -1) {
        return Stack[cursor--];
    }else{
        printf("%s \n", "Stack is empty");
        return -1;
    }
}


 int main(int argc, const char * argv[]) {

  int chislo;
    
    printf("Write the chislo: ");
    scanf("%d",&chislo);

   
    
    
  int bits[RAZMER2];  
   

    for (int i = 0; i < RAZMER2; ++i)
    {
        if (chislo%2==0)
            bits[i] = 0;
        } else
        {
            bits[i] = 1;
        }
        chislo = chislo/2;
    }
   
    
    for (int i = RAZMER2-1; i >= 0; --i)
    {
        push(bits[i]);
    }
     
     pop();
     
  
 }
     
    
   
   
        
    
    
    
   



