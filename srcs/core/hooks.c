/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-jesu <nde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:45:38 by kibotrel          #+#    #+#             */
/*   Updated: 2020/03/06 10:02:41 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clean.h"
#include "events.h"

void	global_hooks(t_env *env, t_sdl *sdl)
{
	while (SDL_PollEvent(&sdl->event))
	{
		if (sdl->event.type == SDL_QUIT)
			clean(env, NOTHING);
		if (env->sdl.event.type == SDL_KEYDOWN)
			env->input[sdl->event.key.keysym.scancode] = 1;
		if (env->sdl.event.type == SDL_KEYUP)
			env->input[sdl->event.key.keysym.scancode] = 0;
		if (sdl->event.type == SDL_MOUSEBUTTONDOWN)
			handle_mouse(env, sdl);
		if (sdl->event.type == SDL_MOUSEMOTION)
			handle_motion(env, sdl);
		if (env->sdl.event.window.event == SDL_WINDOWEVENT_CLOSE)
			clean(env, NOTHING);
	}
	handle_keyboard(env);
	(env->win == GAME && env->setup) ? move(env) : 0;
}
