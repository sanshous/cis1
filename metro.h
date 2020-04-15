#ifndef METRO_H_INCLUDED
#define METRO_H_INCLUDED

class metro
{
    public:
        vector <int> optim_path( string departure_station, string arrival_station, int minute )
        {
            int depart_n, arriv_n;
            for ( int i = 0; i < amount; i ++ )
            {
                if ( strncmp( station[i], departure_station ) == 0 )
                {
                    depart_n = i;
                };
                if ( strncmp( station[i], arrival_station ) == 0 )
                {
                    arriv_n = i;
                };
            };
            vector <int> weight( amount, 0 );
            vector <int vector<int>> path( amount );
            vector <int> open;
            open.push_back(depart_n);
            while( !open.empty )
            {
                int n = open.size
                for ( i = 0 ; i < n; i ++ )
                {
                    for( int j = 0; j < amount; j ++ )
                    {
                        if ( table_path[open[i]][j] != 0 )
                        {
                            if ( weight[j] == 0 )
                            {
                                open.push_back(j);
                                weight[j] = weight[open[i]] + table_path[open[i]][j];
                                path[j] = path[open[i]];
                                path[j].push_back(j);
                            }
                            else if ( weight[j] > weight[open[i]] + table_path[open[i]][j] )
                            {
                                weight[j] = weight[open[i]] + table_path[open[i]][j];
                                path[j] = path[open[i]];
                                path[j].push_back(j);
                            };
                        };
                        if ( table_transition[open[i]][j] != 0 )
                        {
                            if ( weight[j] == 0 )
                            {
                                open.push_back(j);
                                weight[j] = weight[open[i]] + table_transition[open[i]][j];
                                path[j] = path[open[i]];
                                path[j].push_back(j);
                            }
                            else if ( weight[j] > weight[open[i]] + table_transition[open[i]][j] +  )
                            {
                                weight[j] = weight[open[i]] + table_transition[open[i]][j];
                                path[j] = path[open[i]];
                                path[j].push_back(j);
                            };
                        };
                    };
                    open.erase(open.begin() + i);
                };
            };
            return path[arriv]
        }
    private:
        unsigned int amount;
        string station[amount];
        int table_path[amount][amount];
        int table_transition[amount][amount];
};

#endif // METRO_H_INCLUDED
