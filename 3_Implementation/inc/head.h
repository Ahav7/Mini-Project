/**
 * @file head.h
 * @author your Hemanth (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __head_h__
#define __head_h__
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief shows the record of 
 * highest score in the records
 * 
 */
void show_record()
/**
 * @brief resets the score 
 * by calling the function 
 * 
 */
void reset_score()
/**
 * @brief shows the instructions of the game
 * by calling the function
 * 
 */
void help()
/**
 * @brief the score gets edited 
 * when a user plays a game more than once
 * by taking score and name as parameters
 */
void edit_score(float,char[])
