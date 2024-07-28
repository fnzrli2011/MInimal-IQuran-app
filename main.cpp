#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <iostream>

using namespace std;

void Oxu(sf::Music& music, const string& sure)
{
  if(!music.openFromFile(sure))
  {
    cerr << "Mp3 fayli tapilmadi" << endl;
    return;
  }

  music.play();

  while(music.getStatus() == sf::Music::Playing)
  {
    sf::sleep(sf::milliseconds(100));
  }
}

int main()
{
  sf::Music music1;
  sf::Music music2;
  sf::Music music3;
  sf::Music music4;
  sf::Music music5;
  sf::Music music6;

  while (true)
  {
    int a;
    cout << "Fatiha ucun 1 e basin" << endl;
    cout << "Ixlas ucun 2 e basin" << endl;
    cout << "Nas ucun 3 e basin" << endl;
    cout << "Falaq ucun 4 e basin" << endl;
    cout<< "Kafirun ucun 5 e basin" << endl;
    cout<<"Fil ucun 6 a basin" << endl;
    cout << "Cixis ucun 7 e basin" << endl;
    cin >> a;

    if (a == 1)
    {
      Oxu(music1, "Fatiha.mp3");
    }
    else if (a == 2)
    {
      Oxu(music2, "Ixlas.mp3");
    }
    else if (a == 3)
    {
      Oxu(music3, "Nas.mp3");
    }
    else if (a == 4)
    {
      Oxu(music4, "Falaq.mp3");
    }
    else if(a==5)
    {
      Oxu(music5,"Kafirun.mp3");
    }
    else if(a==6)
    {
      Oxu(music6,"Fil.mp3");
    }
    else if (a == 7)
    {
      cout << "Cixis edildi" << endl;
      break;
    }
  }

  return 0;
}
