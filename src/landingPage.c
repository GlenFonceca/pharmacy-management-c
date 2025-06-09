
void landingPage(){
    LandingPageTemplate();
    redLogo();
    pharmName();
    boldred(); gotoxy(12,28); printf("Email:"); boldwhite(); printf(" MaksadPharma@gmail.com"); 
    boldred(); gotoxy(90,28); printf("Phone: ");boldwhite(); printf("+91 987654321 ");reset();
    gotoxy(0,40);
    getchar();
    //loginMenu();
    optionMenu();
    return; 
}
