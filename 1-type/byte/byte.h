unsigned char max_byte(unsigned short number) {
    unsigned short p = number >> 8;
    unsigned short m = (unsigned char)number;
    if (p > m) return p;
    else return m;

}
