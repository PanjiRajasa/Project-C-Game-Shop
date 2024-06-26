//Include library
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

double total_harga;
double bayar;
char inputVoucher[50];
char newEmail[100];
char newPassword[50];





// Pembuatan struct
struct User {
    char email[50];
    char password[50];
};



struct Game {
    char title[100];
};



struct CartItem {
    struct Game game;
};


//fungsi membuat login displayer

void loadingDisplay() {
    
    fflush(stdout);
    
    sleep(1);
    
    printf("\n.");
    
    fflush(stdout);
    
    sleep(1);
    
    printf(".");
    
    fflush(stdout);
    
    sleep(1);
    
    printf(".\n");
    
    fflush(stdout);
    
    sleep(1);
    
    
    
}

/*Easter egg = fungsi yang menampilkan teks*/

int pilihSignUp_Login() {
    printf("\n| ------------ \n");
    printf("| Mau daftar akun / login? (d untuk daftar akun / l untuk login): ");
    
    //kode seterusnya
    
    return 0 + 1;
}


// Fungsi untuk game rekomendasi
void displayRecommendedGames() {
    
    
    
    printf("| ---------------------------------------- |\n");
    printf("|          Game Rekomendasi:               |\n");
    printf("| ---------------------------------------- |\n");
    printf("| 1. The Witcher 3: Wild Hunt        $10000|\n");
    printf("| 2. Red Dead Redemption 2           $10000|\n");
    printf("| 3. Cyberpunk 2077                  $10000|\n");
    printf("| 4. Assassin's Creed Valhalla       $10000|\n");
    printf("| 5. Grand Theft Auto V              $10000|\n");
    printf("| 6. Sekiro: Shadows Die Twice       $10000|\n");
    printf("| 7. The Last of Us Part II          $10000|\n");
    printf("| 8. Doom Eternal                    $10000|\n");
    printf("| 9. Among Us                        $10000|\n");
    printf("| 10. Fall Guys: Ultimate Knockout   $10000|\n");
    printf("| 11. Dota 2                         $10000|\n");
    printf("| 12. Apex Legends                   $10000|\n");
    printf("| 13. Counter-Strike 2               $10000|\n");
    printf("| 14. Palworld                       $10000|\n");
    printf("| 15. Tekken 8                       $10000|\n");
    printf("| 16. Elden Ring                     $10000|\n");
    printf("| 17. Destiny 2                      $10000|\n");
    printf("| 18. Rust                           $10000|\n");
    printf("| 19. Monster Hunter: World          $10000|\n");
    printf("| 20. Supermarket: toko berguna      $10000|\n");
    printf("| ---------------------------------------- |\n");
    
    
    
}




// untuk menambahkan game ke cart
/*
struct Game game
struct CartItem cart[]
adalah variabel struct

int *cartSize 
adalah variabel pointer dengan tipe data int
*/




void addToCart(struct Game game, struct CartItem cart[], int *cartSize) {
    
    
    
    cart[*cartSize].game = game;
    *cartSize += 1;
    
    
    
}




// menampilkan nota
void displayReceipt(struct CartItem cart[], int cartSize) {
    
    
    
    
    printf("| ----------------------------------- \n");
    printf("|          Nota Pembelian Anda:       \n");
    printf("| ----------------------------------- \n");
    
    printf("| ----------------------------------- \n");
    printf("|             No   |  Game            \n");
    printf("| ----------------------------------- \n");
    for (int i = 0; i < cartSize; i++) {
    printf("|              %d    |  %s   $10000\n", i + 1, cart[i].game.title); 
    
        }
    
    printf("\n|Total harga: $%.2f ", total_harga);
    printf("\n|Saldo anda: $%.2f ", bayar);
    bayar -= total_harga;
    printf("\n|Sisa saldo: $%.2f \n", bayar);
    printf("| ----------------------------------- \n");


    
    
}





int main() {
    // system("color 0b");
    bayar = 0.00;
    total_harga = 0.00;



    printf("   _      _      _      _      _      _      _      _      _      _      _      _   \n");
    printf(" _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_\n");
    printf("(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)\n");
    printf(" (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_) \n");
    printf("   _                                                                            _   \n");
    printf(" _( )_                                                                        _( )_\n");
    printf("(_ o _)                                                                      (_ o _)\n");
    printf(" (_,_)       ____    ____    _    __  __ _____   ____  _   _  ___  ____       (_,_) \n");
    printf("   _        / ___|  / ___|  / \\  |  \\/  | ____| / ___|| | | |/ _ \\|  _ \\        _   \n");
    printf(" _( )_     | |     | |  _  / _ \\ | |\\/| |  _|   \\___ \\| |_| | | | | |_) |     _( )_\n");
    printf("(_ o _)    | |___  | |_| |/ ___ \\| |  | | |___   ___) |  _  | |_| |  __/     (_ o _)\n");
    printf(" (_,_)      \\____|  \\____/_/   \\_\\_|  |_|_____| |____/|_| |_|\\___/|_|         (_,_) \n");
    printf("   _                                                                            _   \n");
    printf(" _( )_                                                                        _( )_\n");
    printf("(_ o _)                                                                      (_ o _)\n");
    printf(" (_,_)                                                                        (_,_) \n");
    printf("   _      _      _      _      _      _      _      _      _      _      _      _   \n");
    printf(" _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_  _( )_\n");
    printf("(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)(_ o _)\n");
    printf(" (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_)  (_,_) \n");
    
    
  
    
  
    
    
    /*Loading displayer start*/
    
    
    loadingDisplay();
    
    /*Loading displayer end*/
    
    
    
 printf(" _____ ___  _  _____    ____  _____ ____  ____    _       _    _  ___   ___   ___   ___  \n");
    printf("|_   _/ _ \\| |/ / _ \\  / ___|| ____|  _ \\| __ )  / \\     | |  / |/ _ \\ / _ \\ / _ \\ / _ \\ \n");
    printf("  | || | | | ' / | | | \\___ \\|  _| | |_) |  _ \\ / _ \\   / __) | | | | | | | | | | | | | |\n");
    printf("  | || |_| | . \\ |_| |  ___) | |___|  _ <| |_) / ___ \\  \\__ \\ | | |_| | |_| | |_| | |_| |\n");
    printf("  |_| \\___/|_|\\_\\___/  |____/|_____|_| \\_\\____/_/   \\_\\ (   / |_|\\___(_)___/ \\___/ \\___/ \n");
    printf("                                                         |_|                             \n");

    
    



    /*Loading displayer start*/
    
    printf("\n");
    loadingDisplay();
    printf("\n");
    
    /*Loading displayer end*/
    



    //Start Penampil Judul

    int i, j;
    int rows = 5;
    int cols = 13;





    char c_game_shop[5][13] = {
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
        {'*', 'B', 'Y', ' ', 'P', 'A', 'N', 'J', 'I', ' ', ' ', ' ', '*'},
        {'*', ' ', ' ', ' ', 'A', 'G', 'U', 'S', ' ', 'D', '.', ' ', '*'},
        {'*', ' ', ' ', ' ', 'N', 'A', 'N', 'D', 'A', ' ', ' ', ' ', '*'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
    };
    
    
    
    

    //End Penampil Judul

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%c ", c_game_shop[i][j]);
        }
        printf("\n");
    }
    
    /*
    SEBELUM LOGIN/SIGNUP
    */

   loadingDisplay();

    printf("\n _                _            __  ____         __ _               ___ \n");
    printf("| |    ___   __ _(_)_ __      / / |  _ \\  __ _ / _| |_ __ _ _ __  |__ \\\n");
    printf("| |   / _ \\ / _` | | '_ \\    / /  | | | |/ _` | |_| __/ _` | '__|   / /\n");
    printf("| |__| (_) | (_| | | | | |  / /   | |_| | (_| |  _| || (_| | |     |_|\n");
    printf("|_____\\___/ \\__, |_|_| |_| /_/    |____/ \\__,_|_|  \\__\\__,_|_|     (_)\n");
    printf("            |___/                                                      \n\n");
    
    pilihSignUp_Login(); // fungsi menampilkan teks mau login atau tidak
    
    
    char mau_login_signup[10];
    
    fgets(mau_login_signup, sizeof(mau_login_signup), stdin);
    mau_login_signup[strcspn(mau_login_signup, "\n")] = '\0';
    printf("| ------------ ");
    
    if (strcmp(mau_login_signup, "d") == '\0' ) {
        
        loadingDisplay();

        printf("\n\n _____                                                    \n");
        printf("|  ___|__  _ __ _ __ ___                                  \n");
        printf("| |_ / _ \\| '__| '_ ` _ \\                                 \n");
        printf("|  _| (_) | |  | | | | | |                                \n");
        printf("|_|  \\___/|_|  |_| |_| |_|    __ _                         \n");
        printf("|  _ \\ ___ _ __   __| | __ _ / _| |_ __ _ _ __ __ _ _ __   \n");
        printf("| |_) / _ \\ '_ \\ / _` |/ _` | |_| __/ _` | '__/ _` | '_ \\ \n");
        printf("|  __/  __/ | | | (_| | (_| |  _| || (_| | | | (_| | | | |\n");
        printf("|_|   \\___|_| |_|\\__,_|\\__,_|_|  \\__\\__,_|_|  \\__,_|_| |_|\n");

        //label
        awal_masukkan_email_baru:
        
        
        printf("\n| ------------ \n");
        printf("| Harap masukkan email dan password anda untuk mendaftar \n");
        printf("| ------------ \n");
        printf("| Masukkan email: ");
        fgets(newEmail, sizeof(newEmail), stdin);
        newEmail[strcspn(newEmail, "\n")] = '\0';
        printf("| ------------ \n");
        
        //verifikasi email
        if (strstr(newEmail, "@gmail.com") || strstr(newEmail, "@yahoo.com") || strstr(newEmail, "@outlook.com")) {
            goto lanjut_ke_password_baru;
        } else {
            printf("\n\nEmail tidak valid. Mohon masukkan email dengan format @gmail.com, @yahoo.com, atau @outlook.com.\n");
            goto awal_masukkan_email_baru;
        }
        
        //label
        lanjut_ke_password_baru:
        
        printf("\n| ------------ \n");
        printf("| Masukkan password (Tidak boleh kosong dan melebihi 12 karakter serta minimal 8 karakter): ");
        fgets(newPassword, sizeof(newPassword), stdin);
        newPassword[strcspn(newPassword, "\n")] = '\0';
        printf("| ------------ \n");
        
        //verifikasi password
        if (strcmp(newPassword, "") == 0) {
            printf("\n\nPassword tidak boleh kosong!\n");
            
            goto lanjut_ke_password_baru;
        }
        
        if (strlen(newPassword) < 8) {
            printf("\n\nPassword harus memiliki minimal 8 karakter!\n");
            
            goto lanjut_ke_password_baru;
        }

        // Periksa apakah password melebihi 12 karakter
        if (strlen(newPassword) > 12) {
            printf("\n\nPassword melebihi 12 karakter!\n");
            
            goto lanjut_ke_password_baru;
        }
        
        loadingDisplay();
        
        printf("\n\n+-------------------------------------------------+\n");
        printf("| __  __                _        __ _             |\n");
        printf("||  \\/  | ___ _ __   __| | __ _ / _| |_ __ _ _ __ |\n");
        printf("|| |\\/| |/ _ \\ '_ \\ / _` |/ _` | |_| __/ _` | '__||\n");
        printf("|| |  | |  __/ | | | (_| | (_| |  _| || (_| | |   |\n");
        printf("||_|__|_|\\___|_| |_|\\__,_|\\__,_|_|_ \\__\\__,_|_|   |\n");
        printf("|| __ )  ___ _ __| |__   __ _ ___(_) |            |\n");
        printf("||  _ \\ / _ \\ '__| '_ \\ / _` / __| | |            |\n");
        printf("|| |_) |  __/ |  | | | | (_| \\__ \\ | |            |\n");
        printf("||____/ \\___|_|  |_| |_|\\__,_|___/_|_|            |\n");
        printf("+-------------------------------------------------+\n");

        
        goto start_program_after_signup;
        
    } else if (strcmp(mau_login_signup, "l") == '\0' ) {
        
        goto start_program_after_login;
    }
    
    
    /*Loading displayer start*/
    start_program_after_login:
    
    printf("\n");
    loadingDisplay();
    
    /*Loading displayer end*/
    

    struct User user;
    char fixPassword[] = "C Game Shop";
    struct CartItem cart[20];
    int cartSize = 0;
    
    
    
    
    
    printf("\n\n\n");
    
        printf(" __  __    _    ____  _   _ _  ___  __    _    _   _                                                   \n");
    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|___ __  __    _    ___ _                          \n");
    printf("                                                  | ____|  \\/  |  / \\  |_ _| |                        \n");
    printf("                                                  |  _| | |\\/| | / _ \\  | || |                        \n");
    printf("                                                  | |___| |  | |/ ___ \\ | || |___                     \n");
    printf("                                                  |_____|_|  |_/_/   \\_\\___|_____|                    \n");

    
    
    
    

    printf("| ---------------- \n");
    printf("| Masukkan Email: ");
    fgets(user.email, sizeof(user.email), stdin);
    user.email[strcspn(user.email, "\n")] = '\0';
    printf("| ---------------- \n\n\n");
    
    //verifikasi email
    if (strcmp(user.email, "cgs@gmail.com") == 0) {
        goto lanjut_ke_password;
    } else {
        goto gagal_login;
    }
    
    
    lanjut_ke_password:
    /*Loading displayer start*/
    
    printf("\n");
    loadingDisplay();
    printf("\n");
    
    /*Loading displayer end*/
    
    
    
     printf(" __  __    _    ____  _   _ _  ___  __    _    _   _                                                    \n");
    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|__   _    ____ ______        _____  ____  ____    \n");
    printf("                                                  |  _ \\ / \\  / ___/ ___\\ \\      / / _ \\|  _ \\|  _ \\   \n");
    printf("                                                  | |_) / _ \\ \\___ \\___ \\ \\ /\\ / / | | | |_) | | | |  \n");
    printf("                                                  |  __/ ___ \\ ___) |__) |\\ V  V /| |_| |  _ <| |_| |  \n");
    printf("                                                  |_| /_/   \\_\\____/____/  \\_/\\_/  \\___/|_| \\_\\____/   \n");

    
    
    
    
    
    printf("\n| ---------------- \n");
    printf("| Masukkan password: ");
    fgets(user.password, sizeof(user.password), stdin);
    user.password[strcspn(user.password, "\n")] = '\0';
    printf("| ---------------- \n\n\n");
    
    
    /*Loading displayer start*/
    
    printf("\n");
    loadingDisplay();

    
    /*Loading displayer end*/
    
    

    if (strcmp(user.password, fixPassword) == 0) {
        
        
        
        
        
        
    printf("\n\n\n+----------------------------------------------------------------+\n");
    printf("| _                _         ____            _               _ _ |\n");
    printf("|| |    ___   __ _(_)_ __   | __ )  ___ _ __| |__   __ _ ___(_) ||\n");
    printf("|| |   / _ \\ / _` | | '_ \\  |  _ \\ / _ \\ '__| '_ \\ / _` / __| | ||\n");
    printf("|| |__| (_) | (_| | | | | | | |_) |  __/ |  | | | | (_| \\__ \\ | ||\n");
    printf("||_____|\\___/ \\__, |_|_| |_| |____/ \\___|_|  |_| |_|\\__,_|___/_|_|\n");
    printf("|            |___/                                               |\n");
    printf("+----------------------------------------------------------------+\n\n\n");


        
        
    
        start_program_after_signup:
        printf("\n");
        char choice;
        do {
            
            
            /*Loading displayer start*/
    
            printf("\n");
            loadingDisplay();
            printf("\n");
            
            
            /*Loading displayer end*/
            
            printf("\n\n\n+---------------------------------------------------------------+\n");
            printf("|  ____                                                         |\n");
            printf("| / ___| __ _ _ __ ___   ___                                    |\n");
            printf("|| |  _ / _` | '_ ` _ \\ / _ \\                                   |\n");
            printf("|| |_| | (_| | | | | | |  __/                                   |\n");
            printf("| \\____|\\__,_|_| |_| |_|\\___|                                   |\n");
            printf("|          _                                  _           _ ___ |\n");
            printf("| _ __ ___| | _____  _ __ ___   ___ _ __   __| | __ _ ___(_)__ \\|\n");
            printf("|| '__/ _ \\ |/ / _ \\| '_ ` _ \\ / _ \\ '_ \\ / _` |/ _` / __| | / /|\n");
            printf("|| | |  __/   < (_) | | | | | |  __/ | | | (_| | (_| \\__ \\ ||_| |\n");
            printf("||_|  \\___|_|\\_\\___/|_| |_| |_|\\___|_| |_|\\__,_|\\__,_|___/_|(_) |\n");
            printf("+---------------------------------------------------------------+\n\n\n");
            
            
            
            /*Loading displayer start*/
    
            printf("\n");
            loadingDisplay();
            printf("\n");
            
            
            /*Loading displayer end*/
            
            
            displayRecommendedGames();
            
            printf("\nApakah Anda ingin membeli game rekomendasi? (y/n): ");
            scanf(" %c", &choice);
            getchar();




            if (choice == 'y' || choice == 'Y') {
                
                
                
                
                printf("\nMasukkan nomor game rekomendasi yang ingin Anda beli: ");
                int gameNumber;

                scanf("%d", &gameNumber);
                getchar();

                struct Game recommendedGames[] = {
                    {"The Witcher 3: Wild Hunt"},
                    {"Red Dead Redemption 2"},
                    {"Cyberpunk 2077"},
                    {"Assassin's Creed Valhalla"},
                    {"Grand Theft Auto V"},
                    {"Sekiro: Shadows Die Twice"},
                    {"The Last of Us Part II"},
                    {"Doom Eternal"},
                    {"Among Us"},
                    {"Fall Guys: Ultimate Knockout"},
                    {"Dota 2"},
                    {"Apex Legends"},
                    {"Counter-Strike 2"},
                    {"Palworld"},
                    {"Tekken 8"},
                    {"Elden Ring"},
                    {"Destiny 2"},
                    {"Rust"},
                    {"Monster Hunter: World"},
                    {"Supermarket: toko berguna"}
                };
                
                
                
                

                if (gameNumber >= 1 && gameNumber <= 20) {

                    
                    printf("\n");
                    
                    loadingDisplay();
                    
                    printf("\n");
                    
                    addToCart(recommendedGames[gameNumber - 1], cart, &cartSize);
                    printf("Game telah ditambahkan ke keranjang.\n");
                    total_harga += 10000;
                    
                    
                    printf("\n\n Isi keranjang anda: \n\n");
                    
                    printf("|===============================\n");
                    printf("|  Isi Keranjang Belanja Anda:  \n");
                    for (int i = 0; i < cartSize; i++) {
                    printf("|   %d. %s  $10000\n", i + 1, cart[i].game.title);
                    
                    }
                    
                    printf("|Total harga: $%.2f ", total_harga);
                    printf("\n|===============================\n\n\n");
                    
                    

                } else {
                    
                    printf("\n");
                    
                    printf("Nomor game tidak valid.\n");
                    
                    
                }
                
                
                
            } else {
                
                
                /*Loading displayer start*/
    
                printf("\n");
                loadingDisplay();
                
                
                /*Loading displayer end*/
                
                printf("\n\n\n+---------------------------------------------------------------------------+\n");
                printf("| __  __                 _    _                                             |\n");
                printf("||  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   __ _ _ __ ___   __ _ |\n");
                printf("|| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _` | '_ ` _ \\ / _` ||\n");
                printf("|| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_| | | | | | | (_| ||\n");
                printf("||_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\__,_|_| |_| |_|\\__,_||\n");
                printf("|  __ _  __ _ _ __ ___   ___                                                |\n");
                printf("| / _` |/ _` | '_ ` _ \\ / _ \\                                               |\n");
                printf("|| (_| | (_| | | | | | |  __/                                               |\n");
                printf("| \\__, |\\__,_|_| |_| |_|\\___|                                               |\n");
                printf("| |___/                                                                     |\n");
                printf("+---------------------------------------------------------------------------+\n\n\n");
                
                
                printf("\nMasukkan nama game yang ingin dibeli: ");

                char keyword[100];



                fgets(keyword, sizeof(keyword), stdin);
                keyword[strcspn(keyword, "\n")] = '\0';
                
                

                struct Game newGame;
                strcpy(newGame.title, keyword);



                addToCart(newGame, cart, &cartSize);



                printf("Game telah ditambahkan ke keranjang.\n");
                total_harga += 10000;
                
                printf("\n\n Isi keranjang anda: \n\n");
                    
                printf("|===============================\n");
                printf("|  Isi Keranjang Belanja Anda:  \n");
                for (int i = 0; i < cartSize; i++) {
                printf("|   %d. %s  $10000\n", i + 1, cart[i].game.title);
                
                }
                
                printf("|Total harga: $%.2f ", total_harga);
                printf("\n|===============================\n\n\n");
                
                
            }


            printf("\n");
            loadingDisplay();
            printf("\n");
            
            printf("Apakah Anda ingin membeli lagi? (y/n): ");
            scanf(" %c", &choice);
            getchar();
            
            
            
        } while (choice == 'y' || choice == 'Y');

        
        /*Loading displayer start*/
    
        printf("\n");
        loadingDisplay();
        
        
        /*Loading displayer end*/
        

        printf("\n\n\n+-----------------------------------------------+\n");
        printf("| _  __                     _                   |\n");
        printf("|| |/ /___ _ __ __ _ _ __  (_) __ _ _ __   __ _ |\n");
        printf("|| ' // _ \\ '__/ _` | '_ \\ | |/ _` | '_ \\ / _` ||\n");
        printf("|| . \\  __/ | | (_| | | | || | (_| | | | | (_| ||\n");
        printf("||_|\\_\\___|_|  \\__,_|_| |_|/ |\\__,_|_| |_|\\__, ||\n");
        printf("| ____       _           |__/             |___/ |\n");
        printf("|| __ )  ___| | __ _ _ __  (_) __ _             |\n");
        printf("||  _ \\ / _ \\ |/ _` | '_ \\ | |/ _` |            |\n");
        printf("|| |_) |  __/ | (_| | | | || | (_| |            |\n");
        printf("||____/ \\___|_|\\__,_|_| |_|/ |\\__,_|            |\n");
        printf("|                        |__/                   |\n");
        printf("+-----------------------------------------------+\n\n\n");






        printf("|===============================\n");
        printf("|  Isi Keranjang Belanja Anda:  \n");
        for (int i = 0; i < cartSize; i++) {
        printf("|   %d. %s  $10000\n", i + 1, cart[i].game.title);
        
        }
        
        printf("|Total harga: $%.2f ", total_harga);
        printf("\n|===============================\n\n\n");

        
        /*Loading displayer start*/
    
        printf("\n");
        loadingDisplay();
        
        
        /*Loading displayer end*/
    
    //masukkin voucher
    printf("| ----------------------------  \n");
    printf("| Silahkan masukkan voucher yang anda punya (masukkan \"skip\" jika anda tidak punya voucher): ");
    scanf("%s", inputVoucher);
    getchar(); // untuk membersihkan buffer stdin

    printf("| ----------------------------  \n");

    if(strcmp(inputVoucher, "fishingClub2024") == 0) {
        
        printf("\nPemasukkan voucher berhasil, sekarang total harga game yang anda beli akan mendapatkan pengurangan harga sebesar $5.000,00 :)\n");
        
    } else if (strcmp(inputVoucher, "skip") == 0) {
        
        printf("\nOk, tidak masalah :) \n");

    } else {
        
        printf("\nMohon maaf, voucher anda tidak valid.\n");
    }
        
        
        printf("\n\n\n");
    printf(" ____ ___ _     ___ _   _   __  __ _____ _____ ___  ____  _____ \n");
    printf("|  _ \\_ _| |   |_ _| | | | |  \\/  | ____|_   _/ _ \\|  _ \\| ____|\n");
    printf("| |_) | || |    | || |_| | | |\\/| |  _|   | || | | | | | |  _|  \n");
    printf("|  __/| || |___ | ||  _  | | |  | | |___  | || |_| | |_| | |___ \n");
    printf("|_|__|___|_____|___|_|_|_| |_|__|_|_____| |_|_\\___/|____/|_____|\n");
    printf("|  _ \\| ____|  \\/  | __ )  / \\ \\ / // \\  |  _ \\    / \\  | \\ | |\n");
    printf("| |_) |  _| | |\\/| |  _ \\ / _ \\ V // _ \\ | |_) |  / _ \\ |  \\| |\n");
    printf("|  __/| |___| |  | | |_) / ___ \\ |/ ___ \\|  _ <  / ___ \\| |\\  |\n");
    printf("|_|   |_____|_|  |_|____/_/   \\_\\_/_/   \\_\\_| \\_\\/_/   \\_\\_| \\_|\n");



        int pilihan;
        printf("| --------------------------- \n");
        printf("|   Pilih metode pembayaran:  \n");
        printf("|          1. Visa            \n");
        printf("|          2. MasterCard      \n");
        printf("|          3. Dana            \n");
        printf("|          4. Linkaja         \n");
        printf("| Masukkan pilihan Anda (1-4):  ");
        scanf("%d", &pilihan);
        getchar();
        printf("| --------------------------- \n\n\n");




       switch (pilihan) {
           
           
           
           
            case 1:
                {
                    //cek apakah berhak kena potong harga atau engga
                    if(strcmp(inputVoucher, "fishingClub2024") == 0) {
        
                        total_harga -= 5000.00;
                        
                    }
                    
                    printf("\n\n\n");
                    
                    /*Loading displayer start*/
    
                    loadingDisplay();
                    printf("\n");
                    
                    /*Loading displayer end*/
                    
                    printf("+--------------------------+\n");
                    printf("|__     _____ ____    _    |\n");
                    printf("|\\ \\   / /_ _/ ___|  / \\   |\n");
                    printf("| \\ \\ / / | |\\___ \\ / _ \\  |\n");
                    printf("|  \\ V /  | | ___) / ___ \\ |\n");
                    printf("|   \\_/  |___|____/_/   \\_\\|\n");
                    printf("+--------------------------+\n\n\n");
                    
                    
                    int nomorKartuKredit, pin;
                    //double bayar;

                    loadingDisplay();

                    printf("\n\n__  __                 _    _                             \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___  \n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\ \n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/ \n");
                    printf("| | ____ _ _ __| |_ _   _  | | ___ __ ___  __| (_) |_      \n");
                    printf("| |/ / _` | '__| __| | | | | |/ / '__/ _ \\/ _` | | __|     \n");
                    printf("|   < (_| | |  | |_| |_| | |   <| | |  __/ (_| | | |_      \n");
                    printf("|_|\\_\\__,_|_|   \\__|\\__,_| |_|\\_\\_|  \\___|\\__,_|_|\\__|     \n\n\n");

                    
                    printf("| ----------------------------  \n");
                    printf("| Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("| ----------------------------  \n");

                    loadingDisplay();

                    printf("\n\n__  __                 _    _                               ____ ___ _   _ \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___   |  _ \\_ _| \\ | |\n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\  | |_) | ||  \\| |\n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) | |  __/| || |\\  |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/  |_|  |___|_| \\_|\n\n\n");


                    printf("\n| -----------  \n");
                    printf("| Masukkan PIN: ");
                    scanf("%d", &pin);
                    printf("| -----------  \n");

                    
                    
                    m_saldo_visa:
                        loadingDisplay();

                        printf("\n\n| -----------  \n");
                        printf("| Total harga game yang dibeli: $%.2f  \n", total_harga);
                        printf("| Masukkan saldo: $");
                        scanf("%lf", &bayar);
                        printf("| -----------  \n\n");
                    
                    if(bayar < total_harga) {

                        loadingDisplay();

                        printf("\n\n|Saldo anda tidak cukup.\n");
                        printf("|Total harga: $%.2f \n\n", total_harga);
                        goto m_saldo_visa;
                    }



                    printf("\nPembayaran dengan Visa berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
                
                
                
                
            case 2:
                {   
                    
                    //cek apakah berhak kena potong harga atau engga
                    if(strcmp(inputVoucher, "fishingClub2024") == 0) {
        
                        total_harga -= 5000.00;
                        
                    }
                    
                    
                    printf("\n\n\n");
                    
                    /*Loading displayer start*/
    
                    loadingDisplay();
                    printf("\n");
                    
                    /*Loading displayer end*/
                    
                    printf("+--------------------------------------------------+\n");
                    printf("| __  __           _                             _ |\n");
                    printf("||  \\/  | __ _ ___| |_ ___ _ __ ___ __ _ _ __ __| ||\n");
                    printf("|| |\\/| |/ _` / __| __/ _ \\ '__/ __/ _` | '__/ _` ||\n");
                    printf("|| |  | | (_| \\__ \\ ||  __/ | | (_| (_| | | | (_| ||\n");
                    printf("||_|  |_|\\__,_|___/\\__\\___|_|  \\___\\__,_|_|  \\__,_|||\n");
                    printf("+--------------------------------------------------+\n\n\n");
                    
                    
                    
                    
                    int nomorKartuKredit, pin;

                    
                    loadingDisplay();

                    printf("\n\n__  __                 _    _                             \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___  \n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\ \n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/ \n");
                    printf("| | ____ _ _ __| |_ _   _  | | ___ __ ___  __| (_) |_      \n");
                    printf("| |/ / _` | '__| __| | | | | |/ / '__/ _ \\/ _` | | __|     \n");
                    printf("|   < (_| | |  | |_| |_| | |   <| | |  __/ (_| | | |_      \n");
                    printf("|_|\\_\\__,_|_|   \\__|\\__,_| |_|\\_\\_|  \\___|\\__,_|_|\\__|     \n\n\n");


                    printf("| ----------------------------  \n");
                    printf("| Masukkan nomor kartu kredit: ");
                    scanf("%d", &nomorKartuKredit);
                    printf("| ----------------------------  \n");

                    loadingDisplay();

                    printf("\n\n__  __                 _    _                               ____ ___ _   _ \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___   |  _ \\_ _| \\ | |\n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\  | |_) | ||  \\| |\n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) | |  __/| || |\\  |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/  |_|  |___|_| \\_|\n\n\n");


                    printf("\n| -----------  \n");
                    printf("|Masukkan PIN: ");
                    scanf("%d", &pin);
                    printf("| -----------  \n");
                    
                    m_saldo_mastercard:
                        printf("\n| -----------  \n");
                        printf("| Total harga game yang dibeli: $%.2f  \n", total_harga);
                        printf("| Masukkan saldo: $");
                        scanf("%lf", &bayar);
                        printf("| -----------  \n");
                    
                    if(bayar < total_harga) {
                        printf("|Saldo anda tidak cukup.\n");
                        printf("|Total harga: $%.2f ", total_harga);
                        goto m_saldo_mastercard;
                    }

                    printf("\nPembayaran dengan MasterCard berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 3:
                {   
                    
                    //cek apakah berhak kena potong harga atau engga
                    if(strcmp(inputVoucher, "fishingClub2024") == 0) {
        
                        total_harga -= 5000.00;
                        
                    }
                    
                    
                    printf("\n\n\n");
                    
                    
                    /*Loading displayer start*/
    
                    loadingDisplay();
                    printf("\n");
                    
                    /*Loading displayer end*/
                    
                    printf("+-------------------------+\n");
                    printf("| ____                    |\n");
                    printf("||  _ \\  __ _ _ __   __ _ |\n");
                    printf("|| | | |/ _` | '_ \\ / _` ||\n");
                    printf("|| |_| | (_| | | | | (_| ||\n");
                    printf("||____/ \\__,_|_| |_|\\__,_||\n");
                    printf("+-------------------------+\n\n\n");
                    
                    
                    char email[100], password[100];
                    int nomorTelepon;

                    loadingDisplay();

                    printf("\n\n\n");
    
                    printf(" __  __    _    ____  _   _ _  ___  __    _    _   _                                                   \n");
                    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
                    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
                    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
                    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|___ __  __    _    ___ _                          \n");
                    printf("                                                  | ____|  \\/  |  / \\  |_ _| |                        \n");
                    printf("                                                  |  _| | |\\/| | / _ \\  | || |                        \n");
                    printf("                                                  | |___| |  | |/ ___ \\ | || |___                     \n");
                    printf("                                                  |_____|_|  |_/_/   \\_\\___|_____|                    \n\n\n");

                    printf("| ----------------  \n");
                    printf("| Masukkan email: ");
                    scanf("%s", email);
                    printf("| ----------------  \n");

                    loadingDisplay();

                    printf("\n\n\n __  __    _    ____  _   _ _  ___  __    _    _   _                                                    \n");
                    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
                    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
                    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
                    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|__   _    ____ ______        _____  ____  ____    \n");
                    printf("                                                  |  _ \\ / \\  / ___/ ___\\ \\      / / _ \\|  _ \\|  _ \\   \n");
                    printf("                                                  | |_) / _ \\ \\___ \\___ \\ \\ /\\ / / | | | |_) | | | |  \n");
                    printf("                                                  |  __/ ___ \\ ___) |__) |\\ V  V /| |_| |  _ <| |_| |  \n");
                    printf("                                                  |_| /_/   \\_\\____/____/  \\_/\\_/  \\___/|_| \\_\\____/   \n\n\n");

                    printf("\n| -----------------  \n");
                    printf("| Masukkan password: ");
                    scanf("%s", password);
                    printf("| -----------------  \n");

                    loadingDisplay();

                    printf("\n\n\n__  __                 _    _                             \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___  \n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\ \n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/ \n");
                    printf("| |_ ___| | ___ _ __   ___  _ __                           \n");
                    printf("| __/ _ \\ |/ _ \\ '_ \\ / _ \\| '_ \\                          \n");
                    printf("| ||  __/ |  __/ |_) | (_) | | | |                         \n");
                    printf(" \\__\\___|_|\\___| .__/ \\___/|_| |_|                         \n");
                    printf("               |_|                                         \n\n\n");

                    printf("\n| ----------------------  \n");
                    printf("| Masukkan nomor telepon: ");
                    scanf("%d", &nomorTelepon);
                    printf("| ----------------------  \n");
                    
                    m_saldo_dana:
                        printf("\n| -----------  \n");
                        printf("| Total harga game yang dibeli: $%.2f  \n", total_harga);
                        printf("| Masukkan saldo: $");
                        scanf("%lf", &bayar);
                        printf("| -----------  \n");
                    
                    if(bayar < total_harga) {
                        printf("|Saldo anda tidak cukup.\n");
                        printf("|Total harga: $%.2f ", total_harga);
                        goto m_saldo_dana;
                    }

                    printf("\nPembayaran dengan Dana berhasil!\n");

                    displayReceipt(cart, cartSize); 

                    break;
                }
            case 4:
                {   
                    
                    //cek apakah berhak kena potong harga atau engga
                    if(strcmp(inputVoucher, "fishingClub2024") == 0) {
        
                        total_harga -= 5000.00;
                        
                    }
                    
                    printf("\n\n\n");
                    
                    /*Loading displayer start*/
    
                    loadingDisplay();
                    printf("\n");
                    
                    /*Loading displayer end*/
                    
                    printf("+--------------------------------------+\n");
                    printf("| _     _       _        _     _       |\n");
                    printf("|| |   (_)_ __ | | __   / \\   (_) __ _ |\n");
                    printf("|| |   | | '_ \\| |/ /  / _ \\  | |/ _` ||\n");
                    printf("|| |___| | | | |   <  / ___ \\ | | (_| ||\n");
                    printf("||_____|_|_| |_|_|\\_\\/_/   \\_\\/_|\\__,_||\n");
                    printf("|                           |__/       |\n");
                    printf("+--------------------------------------+\n\n\n");
                    
                    
                    char email[100], password[100];
                    int nomorTelepon;

                    loadingDisplay();

                    printf("\n\n\n");
    
                    printf(" __  __    _    ____  _   _ _  ___  __    _    _   _                                                   \n");
                    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
                    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
                    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
                    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|___ __  __    _    ___ _                          \n");
                    printf("                                                  | ____|  \\/  |  / \\  |_ _| |                        \n");
                    printf("                                                  |  _| | |\\/| | / _ \\  | || |                        \n");
                    printf("                                                  | |___| |  | |/ ___ \\ | || |___                     \n");
                    printf("                                                  |_____|_|  |_/_/   \\_\\___|_____|                    \n\n\n");

                    printf("| ----------------  \n");
                    printf("| Masukkan email: ");
                    scanf("%s", email);
                    printf("| ---------------- \n");

                    loadingDisplay();

                    printf("\n\n\n __  __    _    ____  _   _ _  ___  __    _    _   _                                                    \n");
                    printf("|  \\/  |  / \\  / ___|| | | | |/ / |/ /   / \\  | \\ | |                                                  \n");
                    printf("| |\\/| | / _ \\ \\___ \\| | | | ' /| ' /   / _ \\ |  \\| |                                                  \n");
                    printf("| |  | |/ ___ \\ ___) | |_| | . \\| . \\  / ___ \\| |\\  |                                                  \n");
                    printf("|_|  |_/_/   \\_\\____/ \\___/|_|\\_\\_|\\_\\/_/   \\_\\_| \\_|__   _    ____ ______        _____  ____  ____    \n");
                    printf("                                                  |  _ \\ / \\  / ___/ ___\\ \\      / / _ \\|  _ \\|  _ \\   \n");
                    printf("                                                  | |_) / _ \\ \\___ \\___ \\ \\ /\\ / / | | | |_) | | | |  \n");
                    printf("                                                  |  __/ ___ \\ ___) |__) |\\ V  V /| |_| |  _ <| |_| |  \n");
                    printf("                                                  |_| /_/   \\_\\____/____/  \\_/\\_/  \\___/|_| \\_\\____/   \n\n\n");

                    printf("\n| ----------------- \n");
                    printf("| Masukkan password: ");
                    scanf("%s", password);
                    printf("| ----------------- \n");

                    loadingDisplay();

                    printf("\n\n\n__  __                 _    _                             \n");
                    printf("|  \\/  | __ _ ___ _   _| | _| | ____ _ _ __    _ __   ___  \n");
                    printf("| |\\/| |/ _` / __| | | | |/ / |/ / _` | '_ \\  | '_ \\ / _ \\ \n");
                    printf("| |  | | (_| \\__ \\ |_| |   <|   < (_| | | | | | | | | (_) |\n");
                    printf("|_|  |_|\\__,_|___/\\__,_|_|\\_\\_|\\_\\__,_|_| |_| |_| |_|\\___/ \n");
                    printf("| |_ ___| | ___ _ __   ___  _ __                           \n");
                    printf("| __/ _ \\ |/ _ \\ '_ \\ / _ \\| '_ \\                          \n");
                    printf("| ||  __/ |  __/ |_) | (_) | | | |                         \n");
                    printf(" \\__\\___|_|\\___| .__/ \\___/|_| |_|                         \n");
                    printf("               |_|                                         \n\n\n");

                    printf("\n| ---------------------- \n");
                    printf("| Masukkan nomor telepon: ");
                    scanf("%d", &nomorTelepon);
                    printf("| ---------------------- \n");
                    
                    m_saldo_linkaja:
                        printf("\n| -----------  \n");
                        printf("| Total harga game yang dibeli: $%.2f  \n", total_harga);
                        printf("| Masukkan saldo: $");
                        scanf("%lf", &bayar);
                        printf("| -----------  \n");
                    
                    if(bayar < total_harga) {
                        printf("|Saldo anda tidak cukup.\n");
                        printf("|Total harga: $%.2f ", total_harga);
                        goto m_saldo_linkaja;
                    }

                    printf("\nPembayaran dengan Linkaja berhasil!\n");

                    displayReceipt(cart, cartSize); 
                    

                    break;
                }
            default:
            
            
                printf("\n\n\n");
                
                /*Loading displayer start*/
    
                loadingDisplay();
                printf("\n");
                
                /*Loading displayer end*/
        
                printf("+--------------------------------------------------------+\n");
                printf("| ____  _ _ _ _                   _   _     _       _    |\n");
                printf("||  _ \\(_) (_) |__   __ _ _ __   | |_(_) __| | __ _| | __|\n");
                printf("|| |_) | | | | '_ \\ / _` | '_ \\  | __| |/ _` |/ _` | |/ /|\n");
                printf("||  __/| | | | | | | (_| | | | | | |_| | (_| | (_| |   < |\n");
                printf("||_|   |_|_|_|_| |_|\\__,_|_| |_|  \\__|_|\\__,_|\\__,_|_|\\_\\|\n");
                printf("|__   ____ _| (_) __| |  _ / /                           |\n");
                printf("|\\ \\ / / _` | | |/ _` | (_) |                            |\n");
                printf("| \\ V / (_| | | | (_| |  _| |                            |\n");
                printf("|  \\_/ \\__,_|_|_|\\__,_| (_) |                            |\n");
                printf("|                          \\_\\                           |\n");
                printf("+--------------------------------------------------------+\n\n\n");
                
                
                
                
                printf("Mohon maaf, anda memilih pilihan metode pembayaran yang tidak ada :(\n");
                break;
        }
    }
    else {
        
        
        gagal_login:
        
        printf("  +-------------------------------------------------------------+\n");
        printf("  | _                _                                 _      __|\n");
        printf("  || |    ___   __ _(_)_ __     __ _  __ _  __ _  __ _| |  _ / /|\n");
        printf("  || |   / _ \\ / _` | | '_ \\   / _` |/ _` |/ _` |/ _` | | (_) | |\n");
        printf("  || |__| (_) | (_| | | | | | | (_| | (_| | (_| | (_| | |  _| | |\n");
        printf("  ||_____\\___/ \\__, |_|_| |_|  \\__, |\\__,_|\\__, |\\__,_|_| (_) | |\n");
        printf("  |            |___/           |___/       |___/             \\_\\|\n");
        printf("  +-------------------------------------------------------------+\n\n\n");
        
        
        printf("\nLogin gagal. Pastikan input password atau email anda sudah benar!\n");
    }

    return 0;
}

 








