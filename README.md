# Avancesproyectofinal
Este proyecto pretende crear una cuenta en la cual se incluirá nombre, intereses, ingreso inicial los cuales servirán para poder calcular lo que se ganaría en un futuro si
alguien invirtiera por "n" numero de años con los mismos intereses en inversiones en paginas como cetes directo, en la "clase 1" es la principal en la que se crea la cuenta del usuario
en la "clase 2" se calculan los depositos mensuales para despues poderlos clacular anualmente, en la "clase 3" es en la que se calculan los intereses por año tomando los depositos 
anuales, el deposito inicial y los intereses


//CORRECCIONES
  //Corrección readme
Para este proyecto trabajamos una problematica en la que queremos saber cuanto dinero tendremos en un futuro si es que hacemos una invertion y somos constantes, para esto tenemos una clase llamada CuentaBanco que es donde creamos nuestra cuenta y ponemos todos nuestros valores a evaluar, en este objeto vamos a crear otro con compocición el cual ayudará al calculo de las ganancias y ayudando a dar un mejor resumen de la cuenta, despues en la clase Ganancias anuales que hereda de la duncion CuentaBanc,o es donde analizamos los datos y hacemos unos calculos para de esta forma poder conocer cuanto obtendremos al final de "n" cantidad de años transcurridos, esto al final nos da el resumen de la cuenta utilizando atributos de Cuenta Banco(heredado) y de ingresosanuales(objeto que utiliza compocicion) y en caso de no tener ningun dato, entonces mostrar que no existen beneficios para la cuenta
  //Interacción con el usuario
Para corregirlo implementé en el main que el usuario pueda elegir los valores que se le darán al objeto
  //Herencia
Para corregir esto, implementé herencia de CuentaBanco a GananciasAnuales ya que estos compartían varios puntos y variables de instancia
  //Comentarios y readme
Para corregir esto, puse para qu funcionaba cada clase, atributos, en donde se declaraban las variables de instancia y en el main el para se ponían las cosas y reescribí el readme tratando de ser mas claro(Sección que dice "corrención readme")
  
