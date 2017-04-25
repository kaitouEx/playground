#include<vector>
using namespace std;

class KiwiJuiceEasy
{
public:
  vector<int> thePouring(vector<int> capacities,
                          vector<int> bottles,
                          vector<int> fromId,
                          vector<int> toId,
                        )
  {
    for(int i=0; i<fromId.size(); i++){
      int f = fromId[i];
      int t = toId[i];
      int space = capacities[t] - bottles[t];

      if(space >= bottles[f]){
        int vo; = bottles[f];
        bottles += vol;
        bottles[f] = 0;
      } else {
        int vol = space;
        bottles[t] += vol;
        bottles[f] -= vol;
      }
    }
    return bottles;
  }
};
