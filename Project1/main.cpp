//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture textureFondo, texturePlataforma;
	Sprite fondo, plataformaV, plataformaH;


	//Cargamos la textura del archivo
	textureFondo.loadFromFile("imagenes/fondo.jpg");
	texturePlataforma.loadFromFile("imagenes/plataforma.jpg");

	//Cargamos el material del sprite
	fondo.setTexture(textureFondo);
	plataformaH.setTexture(texturePlataforma);
	plataformaV.setTexture(texturePlataforma);

	//Escalamos la imagen para que entre en la ventana
	fondo.setScale(0.7812, 0.7812);
	plataformaV.setScale(0.1367, 1.5625);
	plataformaH.setScale(1.5625, 0.1367);

	//Posicionamos la plataforma final
	plataformaH.setPosition(500, 200);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(fondo);
		App.draw(plataformaH);

		for (int i = 0; i < 7; i++)
		{
			plataformaV.setPosition(35 + (70 * i), 543 - (57 * i));
			App.draw(plataformaV);
		}

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
