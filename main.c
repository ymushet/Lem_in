#include "lem_in.h"


/*
 * Написать првоерку на то существует ли уже комнату куда она добавляется.
 * Написать проверку на совпадение координат с другими.
 * Написать проверку на то есть ли комнаты которые мы линкуем. - Первые 3 пунка относятся к ft_is_valid
 * При добавлении линков - добавлять так же линки в обратном порядке.
 *  * Написать добавления комнат и линков в обьявленные структуры данных.
 */


/*НЕ ДОБАВЛЯТЬ ЛИНК, ЕСЛИ ОН УЖЕ СУЩЕСТВУЕТ! (проверить)*/

//Прописать логику работы с файлами (путь файла указан в аргументах) добавить проверку валидности файлового дескриптора.

int main(void)
{
    int  ff = open("/nfs/2016/y/ymushet/CLionProjects/Lem_in/map.txt", O_RDONLY);
    if (ff != -1)
    {
        ft_lem_in(ff);
		while(1);
        close(ff);
    }
    return (0);
}