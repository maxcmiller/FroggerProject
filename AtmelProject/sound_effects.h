/*
 * sound_effects.h
 *
 * Author: maxcmiller
 */ 

#ifndef SOUND_EFFECTS_H_
#define SOUND_EFFECTS_H_

void init_sound_effects(void);

void stop_sound(void);

uint8_t is_playing_sound(void);

void update_sound_effects(uint8_t is_paused);

void play_sound_death(void);

void play_sound_game_over(void);

void play_sound_new_level(void);

void play_sound_reached_riverbank(void);

void play_sound_frog_move(void);

#endif /* SOUND_EFFECTS_H_ */