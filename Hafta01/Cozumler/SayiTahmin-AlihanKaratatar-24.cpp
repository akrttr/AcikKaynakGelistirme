#include <iostream>
#include <string>

/*Bu program A.ık Kaynak Geliştiriciliği eğitimi kapsamında yazılmış bir sayı oyunudur.
  Kullanıcıdan aldığı sayıyı tuttuğu sayı ile kıyaslar ve doğru sonucu buluncaya kadar oynamaya devam edersiniz  
  */
int main()
{

    int tut = 7;
    int tahmin;

    
    
    while(true) {
        std::cout << "1-10 arasında bir sayı giriniz:" << std::endl;
        std::cin >> tahmin;
    
    
        if (tahmin == tut)
        {
            std::cout << "Tebrikler!Doğru Tahmin!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Üzgünüm.Tekrar deneyin!" << std::endl;

        }
    
    }
return 0;
}

