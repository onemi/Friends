//
//  main.c
//  Friends
//
//  Created by Диана Корсак on 23.07.13.
//  Copyright (c) 2013 Диана Корсак. All rights reserved.
//

#include <stdio.h>



int main(int argc, const char * argv[])
{
    int episodes; 
    int seasons;

    printf (" What season of Friends are you watching now? ");
    scanf ("%d", &seasons);
    printf (" What episode of season %d have you watched? ", seasons);
    scanf ("%d", &episodes);
    
    int seasonsLeft;
    seasonsLeft = 10 - seasons;
            printf (" You still have to watch the entire %d season%s\n", seasonsLeft, ( seasonsLeft !=1 ? "s" : "" ));
    
    int episodesLeft;
    int episodesPerSeason[] = { 22, 21, 23, 22, 24, 25, 22, 21, 23, 22 };
    episodesLeft = episodesPerSeason[seasons - 1] - episodes;


    printf ( " and %d episode%s from season %d", episodesLeft, (episodesLeft != 1 ? "s" : ""), seasons );
    return 0;
}

