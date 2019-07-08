# *Torero - 2019* #
Proyecto realizado por el grupo Los Enviados de Chayanne en el año 2019 para el curso EI-2001-43 “Taller de proyectos: Battlebots” de la Facultad de Ciencias Físicas y Matemáticas de la Universidad de Chile.

![Torero](/multimedia/Torero.JPG)



# *Integrantes* #
- Esteban Araneda - FCFM
- Matias Jara - FCFM
- Karen Lavados - FCFM
- Diego Manríquez - FCFM


# *Descripción* #

Nos basamos en 2 ideas principales, El Minotauro del show Battlebots y los robots de sumo japoneses (links en _Lluvia de ideas_). 

Al percatarnos de que esto era similar a un toro decidimos nombrarlo bajo el nombre de la canción de Chayanne “Torero”.

Físicamente el robot es una caja negra, 2 motores, un par de cuernos en la parte delantera y una placa con pinchos en la parte trasera.


# *Estrategia utilizada* #

Nuestra idea era aprovechar que solo se usa energía en lo motores para poder empujar con fuerza a los rivales fuera de la arena.

#### *Ofensiva*

Dado que nuestra arma (los cuernos y la placa) solo sirve para atacar, decidimos que El Torero puede atacar siempre y cuando este no se vaya a salir de la pista.


#### *Defensiva*

Sin embargo, el bot no tiene defensa, por lo que ante situaciones de peligro solo tiene 2 opciones: correr o aguantar.

## *Controlador*

El dispositivo que controla al Envido de Chayanne es una aplicación de celular que, conectando por vía bluetooth a la placa electrónica del bot, permitía tener un dominio total de este.

Los movimientos del robot eran de 2 tipos: Lineal (Avanzar y Retroceder) y Rotacional (En sentido horario y antihorario sobre su propio eje).

Además de tener una buena presentación visual: Una foto sexy de Chayanne sobre una motocross personalizada.


## *Problema - Solución*

El problema más preocupante fue relacionado con la parte electrónica dle bot (código y construcción). Al tener la idea de diseñar un arma usando servomotores, el código de los servos, al unirlo con el de movimiento (las ruedas), provocaba un bloqueo en la conexión existente entre la aplicación y el bluetooth de la placa Arduino. La solución a este problema fue enfocar toda la energía de la batería a las ruedas, para que de esa forma fuera más eficiente tanto el movimiento como el impacto que “El Torero” tendría al enfrentarse a otros bots. Referente a la construcción, no se pudo llegar a un resultado gratificante cuando intentábamos conectar los servos y los otros componentes (Batería, bluetooth, ruedas, etc) a la placa. Como consecuencia, varios de nuestros aparatos se quemaron y tuvimos que solucionarlo comprando unos nuevos.

Otro Problema fueron las dimensiones del bot. Al comienzo, El enviado de Chayanne era un gran bloque cubierto por bloques de Lego. A raíz de esto el Torero perdía todo poder cuando se hablaba de velocidad, por lo que decidimos disminuir las dimensiones y peso del bot para que este pudiera ser más veloz que el Rasho Macuin (KUCHAU).

# *Diagrama funcional* #

- Electrico:

![fritz_torero](/diagrama/fritz_torero.jpeg)

- Flujo (se especifica solo Arduino, para más revisar la carpeta _diagramas_):

![Flujo1](/diagrama/Flujo1.jpeg)

![FlujoBueno](/diagrama/FlujoBueno.jpeg)

# *Paso a Paso* #

Materiales y herramientas:

- Carton
- 2 Motores DC
- 1 Arduino UNO
- 1 Puente H
- Cables
- Impresora 3D
- Cautin y estaño para soldar
- Parlante
- Ruedas
- Fotos de Chayanne
- Baterias
- Silicona caliente y su pistola
- Corta carton

Construccion:

## Paso 1: "Elaboracion de la estructura"

Para la elaboracion de la estructura principal del battlebot se modifico con corta carton la parte delantera de una caja rectangular(20x20x10)  para hacerla triangular, esto el fin de adecuarse a las armas a utilizar. La utilizacion de este metodo por sobre la impresion en cortadora laser de los planos nos permitio poder tener una estructura mucho mas resistente debido a que al ser una caja ya armada las uniones entre las partes son mucho mas firmes.

Para poder posicionar los motores de manera correcta se le hizo un agujero rectangular(6.5x2.3) a cada lateral de la caja, lo que permite que los motores esten bien sujetos a la estructura sea mas dificil llegar a dañarlos por efecto de otro Battlebot.

Por ultimo se afirman correctamente los motores a sus agujeros respectivos, junto con pegar la rueda central a la parte inferior y fortalecer las esquinas e intersecciones de las paredes mediante el uso de silicona caliente.

Las armas, luego de ser impresas en 3D pueden ser pegadas usando silicona caliente.

## Paso 2: "Sistemas electricos"

Conectar según lo indicado en el sig. diagrama:

![fritz_torero](/diagrama/fritz_torero.jpeg)

## Paso 3: "Codigo"

Usar el codigo que se encuentra en la carpeta _codigos_

# *Proyecciones a Futuro* #

-  El torero, al salir triunfador de muchas batallas y por haber demostrado gran valentía frente a los bots opositores, Lord Chayanne decide subir de rango a nuestro luchador transformándose en "Sir Torero: Caballero del Boom Boom, enviado de Lord Chayanne". De esta manera, a nuestro noble caballero se le otorgará una armadura de metal, en donde el bot tendrá la facilidad de colocársela para el momento de la batalla y sacársela cuando para momentos de descanso y meditación, además de blindar, gracias a la armadura, sus cuernos morados, para transformarlos en armas letales con filo de espada.

-  Como se dijo anteriormente, crear un sistema de interruptor más sofisticado.

- Un soporte para la batería de 12V.

- Un módulo de arduino que reprodusca la música del rey Chayanne.

- Usar fotos coloridas de Chayanne, para que brille en todo su esplendor la gran hermosura que posee.

## Licencia
<a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/"><img alt="Licencia Creative Commons" style="border-width:0" src="https://i.creativecommons.org/l/by-nc/4.0/88x31.png" /></a><br />Esta obra está bajo una <a rel="license" href="http://creativecommons.org/licenses/by-nc/4.0/">Licencia Creative Commons Atribución-NoComercial 4.0 Internacional</a>.
