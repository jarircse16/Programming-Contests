#include <bits/stdc++.h>
using namespace std;

void solve() {
    int nxt_QAA_sss_s35far4643, _QAA_sss_s35far4643;
    cin >> nxt_QAA_sss_s35far4643 >> _QAA_sss_s35far4643;

    vector<int> _2_a_c_(nxt_QAA_sss_s35far4643 + 1, 0);
    vector<int> _w3_w111_n07_g0_60wN_(nxt_QAA_sss_s35far4643 + 1, 0);

    for (int _o_b_f_s_c_t_2023_991_bczBSae = 1; _o_b_f_s_c_t_2023_991_bczBSae <= nxt_QAA_sss_s35far4643; _o_b_f_s_c_t_2023_991_bczBSae++) {
        cin >> _2_a_c_[_o_b_f_s_c_t_2023_991_bczBSae];
        _w3_w111_n07_g0_60wN_[_o_b_f_s_c_t_2023_991_bczBSae] = _w3_w111_n07_g0_60wN_[_o_b_f_s_c_t_2023_991_bczBSae - 1] + _2_a_c_[_o_b_f_s_c_t_2023_991_bczBSae];
    }

    while (_QAA_sss_s35far4643--) {
        int tr1p13x_____, xefer____;
        cin >> tr1p13x_____ >> xefer____;
        cout << _w3_w111_n07_g0_60wN_[xefer____] - _w3_w111_n07_g0_60wN_[tr1p13x_____ - 1] << " "<< '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int _QAA_sss_s35far4643 = 1;

    while (_QAA_sss_s35far4643--) {
        solve();
    }

    return 0;
}
