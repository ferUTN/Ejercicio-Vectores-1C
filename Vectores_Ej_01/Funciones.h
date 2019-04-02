/** \brief Procedimiento que carga un vector
 *
 * \param Vector de enteros a cargar por el usuario
 * \param Longitud del vector
 * \return void
 *
 */
void cargarVector(int [], int);


/** \brief Procedimiento que imprime un vector
 *
 * \param Vector de enteros a imprimir
 * \param Longitud del vector
 * \return void
 *
 */
void imprimirVector(int [], int);


/** \brief Función que devuelve el máximo número contenido en el vector
 *
 * \param Vector de enteros
 * \param Longitud del vector
 * \return Devuelve el máximo
 *
 */
int buscarMaximo(int [], int);


/** \brief Función que devuelve el mínimo número contenido en el vector
 *
 * \param Vector de enteros
 * \param Longitud del vector
 * \return Devuelve el mínimo
 *
 */
int buscarMinimo(int [], int);


/** \brief Función que busca un valor en el vector
 *
 * \param Vector de enteros
 * \param Longitud del vector
 * \param Número a buscar
 * \return Devuelve el índice en donde se encuentra el número o -1 si no lo encontró
 *
 */
int buscarValor(int [], int, int);
