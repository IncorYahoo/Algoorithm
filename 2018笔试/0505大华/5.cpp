#include<iostream>
#include <vector>
using namespace std;

struct road{
    int castle_from;
    int castle_to;
    int coins;
};

int coin_sum;
int num_walk_time;
int n_city;
void ff( vector<road> &road_in, vector<int>& city_use_in)
{
    int max_coin=0;
    int road_mark=0;
    int city_mark=0;
    for(int i =0;i<road_in.size();i++)
    {
        if(city_use_in[road_in[i].castle_to]==-1
           &&city_use_in[road_in[i].castle_from]>-1
                && road_in[i].coins > max_coin)
        {
            road_mark=i;
            max_coin=road_in[i].coins;
            city_mark=road_in[i].castle_from;
        }
        if(city_use_in[road_in[i].castle_from]==-1
           &&city_use_in[road_in[i].castle_to]>-1
           && road_in[i].coins > max_coin)
        {
            road_mark=i;
            max_coin=road_in[i].coins;
            city_mark=road_in[i].castle_to;
        }

    }
    city_use_in[city_mark]=-1;
    road_in[road_mark].coins=-1;
    coin_sum= coin_sum+max_coin;
    num_walk_time++;
    if(num_walk_time<n_city-1)
    {
        find_max_coin_road(road_in,city_use_in);
    }
    else
    {
        return;
    }

}

void init(vector<road> &road_sum, vector<int>& city_use_in)
{
    int max_coin=0;
    int road_mark;
    for(int i = 0;i<road_sum.size();i++)
    {
        if(max_coin<road_sum[i].coins)
        {
            max_coin=road_sum[i].coins;
            road_mark=i;
        }
    }
    city_use_in[road_sum[road_mark].castle_to]=-1;
    city_use_in[road_sum[road_mark].castle_from]=-1;
    road_sum[road_mark].coins=-1;
    coin_sum= coin_sum+max_coin;
}



int main() {
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        coin_sum=0;
        num_walk_time=0;
        vector<road> cost;
        int n,m;
        cin >> n >> m;
        n_city=n;
        for(int i = 0;i<n;i++)
        {
            v.push_back(i);
        }
        for(int i = 0 ; i < m;i++)
        {
            road road_temp;
            cin >> road_temp.castle_from>>road_temp.castle_to>>road_temp.coins;
            cost.push_back(road_temp);
        }
        init(cost,v);
        ff(cost,v);
        cout << coin_sum;

    }
    return 0;
}


 