//旨在用夹逼法计算根号值

#include<iostream>
#include<cmath>
int main()
{   
    long double root = 0,half_root = 0,sw_halfvalue = 0,cfgvalue,stander_root;
    std::cout << "input the value which you want to get root"<<std::endl;
    std::cin >> root;
    stander_root = root;
    if(root <= 0){
        printf("0");
    }
    else{
        half_root = root *0.5;
        while(abs(half_root*half_root - stander_root) > 0.00001){
            
            //std::cout << half_root << std::endl;
            cfgvalue = half_root*half_root;
            if(cfgvalue < stander_root){
                
                sw_halfvalue = half_root;
                half_root = (sw_halfvalue + root)*0.5;
            }
            else if ((cfgvalue = 0))
            {
                break;
            }
            
            else{
                root = half_root;
                half_root = (sw_halfvalue + root)*0.5;
            }

            }
            
            }
        std::cout << half_root << std::endl;
        
    

    return 0;
}