//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int bow[25], bow2[25], flip=0;

int main()
{
    int i;
    
    for(i=0;i<20;i++){
        cin >> bow[i];
        bow2[i]=bow[i];
    }
    
    for(i=0;i<19;i++){
        if(bow[i]==1){
            bow[i]=1-bow[i], bow[i+1]=1-bow[i+1], bow[i+2]=1-bow[i+2];
            flip++;
        }
    }
    int lar=flip;
    flip=1;
    bow2[0]=1-bow2[0], bow2[1]=1-bow2[1];
    for(i=0;i<19;i++){
        if(bow2[i]==1){
            bow2[i]=1-bow2[i], bow2[i+1]=1-bow2[i+1], bow2[i+2]=1-bow2[i+2];
            flip++;
        }
    }
    
    cout << min(flip, lar) << endl;
    
    return 0;
}
