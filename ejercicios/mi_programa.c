#include <stdio.h>
#include <string.h>
#include <time.h>  // For current year

void event_lookup(int year_of_birth);

int main() {
    char name[50];
    int age;
    int current_year, year_of_birth;

    // Get the current year
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    current_year = tm.tm_year + 1900;

    // Ask for user's name
    printf("¿Cómo te llamas?: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;  // Remove the newline character from name input

    // Ask for user's age
    printf("¿Cuántos años tienes?: ");
    scanf("%d", &age);

    // Calculate the year of birth
    year_of_birth = current_year - age;

    // Output the result
    printf("Nombre: %s\n", name);
    printf("Edad: %d años\n", age);
    printf("Naciste en el año: %d\n", year_of_birth);

    // Look up the event based on year of birth
    event_lookup(year_of_birth);

    return 0;
}

void event_lookup(int year_of_birth) {
    // Calculate the age from the year of birth
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int current_year = tm.tm_year + 1900;
    int age = current_year - year_of_birth;

    // Predefined events for ages 25-55
    if (age >= 25 && age <= 55) {
        switch (year_of_birth) {
            case 1995:
                printf("En 1995: Se lanzó Windows 95.\n");
                break;
            case 1994:
                printf("En 1994: Nelson Mandela se convirtió en presidente de Sudáfrica.\n");
                break;
            case 1993:
                printf("En 1993: Se firmaron los Acuerdos de Paz de Oslo.\n");
                break;
            case 1992:
                printf("En 1992: Se celebraron los Juegos Olímpicos en Barcelona.\n");
                break;
            case 1991:
                printf("En 1991: La Unión Soviética se disolvió.\n");
                break;
            case 1990:
                printf("En 1990: Alemania se reunificó.\n");
                break;
            case 1989:
                printf("En 1989: Cayó el Muro de Berlín.\n");
                break;
            case 1988:
                printf("En 1988: Se firmó el Tratado INF entre Estados Unidos y la URSS.\n");
                break;
            case 1987:
                printf("En 1987: Se firmó el Tratado de Montreal para proteger la capa de ozono.\n");
                break;
            case 1986:
                printf("En 1986: Ocurrió el desastre de Chernóbil.\n");
                break;
            case 1985:
                printf("En 1985: Se estrenó 'Volver al Futuro'.\n");
                break;
            case 1984:
                printf("En 1984: Apple lanzó el Macintosh.\n");
                break;
            case 1983:
                printf("En 1983: Se creó el primer teléfono móvil portátil.\n");
                break;
            case 1982:
                printf("En 1982: Se libró la Guerra de las Malvinas.\n");
                break;
            case 1981:
                printf("En 1981: IBM lanzó la primera PC.\n");
                break;
            case 1980:
                printf("En 1980: Pac-Man fue lanzado.\n");
                break;
            case 1979:
                printf("En 1979: Se firmó el Tratado de Paz entre Israel y Egipto.\n");
                break;
            case 1978:
                printf("En 1978: Nació Louise Brown, el primer bebé probeta.\n");
                break;
            case 1977:
                printf("En 1977: Se lanzó la primera película de 'Star Wars'.\n");
                break;
            case 1976:
                printf("En 1976: Se fundó Apple.\n");
                break;
            case 1975:
                printf("En 1975: Se fundó Microsoft.\n");
                break;
            case 1974:
                printf("En 1974: Richard Nixon renunció como presidente de los EE.UU.\n");
                break;
            case 1973:
                printf("En 1973: Se produjo la crisis del petróleo.\n");
                break;
            case 1972:
                printf("En 1972: Se llevaron a cabo los Juegos Olímpicos de Múnich con el atentado.\n");
                break;
            case 1971:
                printf("En 1971: Se fundó Greenpeace.\n");
                break;
            case 1970:
                printf("En 1970: Se celebra el primer Día de la Tierra.\n");
                break;
            case 1969:
                printf("En 1969: El hombre llegó a la Luna.\n");
                break;
            case 1968:
                printf("En 1968: Martin Luther King fue asesinado.\n");
                break;
            case 1967:
                printf("En 1967: Se produjo la Guerra de los Seis Días en Oriente Medio.\n");
                break;
            case 1966:
                printf("En 1966: Se produjo la Revolución Cultural en China.\n");
                break;
            case 1965:
                printf("En 1965: Se firmó el Tratado del Espacio Exterior.\n");
                break;
            default:
                printf("En %d: Un evento importante sucedió.\n", year_of_birth);
                break;
        }
    }
    // For people older than 55
    else if (age > 55) {
        printf("Oh, de esto hace mucho tiempo, no me acuerdo qué pasó entonces.\n");
    }
    // For people younger than 25
    else {
        printf("Todavía eres joven, pero seguro que muchas cosas interesantes sucedieron en tu vida.\n");
    }
}
