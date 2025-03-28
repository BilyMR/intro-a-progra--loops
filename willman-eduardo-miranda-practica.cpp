#include <iostream>

int main()
{
    char ans;
    int good_end;
    
   
    do{
        std::cout<<"Historia hasta ahora. \nEstas de ida a la fiesta en casa de tu amigo. Desafortunadamente te pierdes y tus amigos no te contestan las llamadas. Para tu desgracia, tambien comienza a llover. A lo lejos ves a alguien haciendote señas. Te acercas. Es un señor, de 40 años aproximadamente. Te ve desorientado, y te ofrece resguardo hasta que la lluvia pase. ¿Que haces? \na) Aun que esceptico, aceptas. \nb) Rechazas su oferta de mala gana y te vas. \nc) De manera respetuosa rechazas la oferta."<<std::endl;
        std::cin>>ans;
        if(ans == 'a') {
            std::cout<<"Él se contenta y te deja pasar a su casa."<<std::endl;
        } else if(ans == 'b') {
            std::cout<<"Está enojado, en el momento que te volteas sientes un fuerte golpe en la cabeza y quedas noqueado."<<std::endl;
        } else if(ans == 'c') {
            std::cout<<"Te insiste, tanto que terminas cediendo"<<std::endl;
        }
    } while(ans != 'a' && ans != 'b' && ans != 'c');
    
    do{
        std::cout<<"Ahora estas dentro de su casa, sentado/a en un sofa. El se presenta \" Me llamo Jhon, pero me dicen Smiles.\" Smiles te ofrece un plato de comida mientras esperas que pase la lluvia. ¿Lo aceptas?\na) Aceptas y das gracias. \nb) Lo rechazas. \nc) Le tiras el plato en la cara."<<std::endl;
        std::cin>>ans;
        if(ans == 'a') {
            std::cout<<"Smiles sonrie mientras te ve comer."<<std::endl;
        } else if(ans == 'b') {
            std::cout<<"Se lo ve decepcionado, pero respeta tu decisión."<<std::endl;
        } else if(ans == 'c') {
            std::cout<<"Smiles solo sonrie."<<std::endl;
        }
    } while(ans != 'a' && ans != 'b' && ans != 'c');
    
    do{
        std::cout<<"Sigue lloviendo, mientras Smiles lava los platos notas que la puerta principal está abierta. ¿Que haces?\na) Te quedas donde estás. \nb) Sales corriendo."<<std::endl;
        std::cin>>ans;
        if(ans == 'a') {
            std::cout<<"Luego de terminar con la loza, Smiles empieza a contarte una historia. Es acerca de su vida y como le haces acuerdo a su hijo/a. Poco a poco simpatizas con el."<<std::endl;
            good_end++;
        } else if(ans == 'b') {
            std::cout<<"Smiles sale corriendo tras de ti. Debido a la lluvia y los nervios te tropiezas y Smiles te atrapa.Está muy enojado."<<std::endl;
        }
    } while(ans != 'a' && ans != 'b');
    
    if(good_end == 1) {
        std::cout<<"Tuviste una charla amena con Smiles, ahora sientes confianza hacia el. A lo lejos escuchas a tus amigos gritando tu nombre. Le agradeces a Smiles y te despides. Estás vivo."<<std::endl;
        return 0;
    } else {
        do{
            std::cout<<"Estás atado/a a una silla y Smiles está junto enfrente tuyo. Puedes ver que está enojado. Te mira y te dice \"¿Por que lo hiciste?\" ¿Que respondes?\na) Tengo miedo. Me quiero ir. \nb) Me das asco. Sacame de aquí. \nc) Solo ví la puerta y corrí."<<std::endl;
            std::cin>>ans;
            if(ans == 'a') {
                std::cout<<"Smiles no dice nada."<<std::endl;
            } else if(ans == 'b') {
                std::cout<<"Smiles no dice nada"<<std::endl;
            } else if(ans == 'c') {
                std::cout<<"Smiles no dice nada."<<std::endl;
            }
        } while(ans != 'a' && ans != 'b' && ans != 'c');
        
        do{
            std::cout<<"De repente escuchas la voz de tus amigos. Te están buscando. Smiles se alerta, te encierra en una habitación y va a ver. ¿Que haces?\na) Permaneces calmado y tratas de deshacer tus ataduras. \nb) Empiezas a gritar para llamar la atencion de tus amigos. \nc) No haces nada, te quedas quieto."<<std::endl;
            std::cin>>ans;
            if(ans == 'a') {
                std::cout<<"Lograste deshacer tus ataduras. Te escabulles por la casa y logras salir. Pudiste salir vivo."<<std::endl;
                return 0;
            } else if(ans == 'b') {
                std::cout<<"Smiles te escucha primero y decide callarte de una vez. Lo ultimo que ves es a Smiles acercarse a ti con lo que parece ser un hacha. Estas muerto."<<std::endl;
                return 0;
            } else if(ans == 'c') {
                std::cout<<"Te resignas a hacer algo más. Las voces de tus amigos poco a poco se van atenuando. Se han ido."<<std::endl;
            }
        } while(ans != 'a' && ans != 'b' && ans != 'c');
        
        do{
        std::cout<<"Smiles te dá 2 opciones. Puedes acabar tu solo con tu sufrimiento o te quedas con el en esa casa a partir de ese momento. ¿Cual es tu decisión?\na) Decides acabar con tu sufrimiento. \nb) Te quedas."<<std::endl;
            std::cin>>ans;
            if(ans == 'a') {
                std::cout<<"Lo ultimo que ves es a Smiles agarrar un hacha que tenia guardada. Estas muerto."<<std::endl;
            } else if(ans == 'b') {
                std::cout<<"Te quedas con Smiles. No tienes ganas de vivir, de luchar. Solo estás ahí."<<std::endl;
            } 
        } while(ans != 'a' && ans != 'b' );
    }

    return 0;
}
