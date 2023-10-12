int get_score(short score, int start, int stop, int now) {
    if (now <= start) return score;
    else if (now > stop) return score / 2;
    else return score - (now - start) * 25;
}
