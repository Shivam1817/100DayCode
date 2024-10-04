//2491. Divide Players Into Teams of Equal Skill

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = skill.size() , n_2 = n/2;
        sort(skill.begin(),skill.end());
        long long sum = accumulate(skill.begin(),skill.end(), 0LL);
        if(sum%(n_2) != 0) return -1;
        int team_skill = sum/n_2;
        long long chemistry = 0;
        for(int i = 0 ; i <  n_2 ; i++){
            long long l = skill[i] , r = skill[n-1-i];
            if(l+r != team_skill) return -1;
            chemistry += l*r;
        }
        return chemistry;
    }
};
