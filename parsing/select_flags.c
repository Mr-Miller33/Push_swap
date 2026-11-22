#include "push_swap.h"

void select_flags(char **argv, int argc, int *i, t_options *options)
{
	if (ft_strcmp(argv[1], "--simple") == 0)
	{
		if (*i < argc)
		{
			(*i)++;
		}
		options->strategy = SIMPLE;
		if (*i < argc && ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--medium") == 0)
	{
		if (*i < argc)
		{
			(*i)++;
		}
		options->strategy = MEDIUM;
		if (*i < argc && ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--complex") == 0)
	{
		if (*i < argc)
		{
			(*i)++;
		}
		options->strategy = COMPLEX;
		if (*i < argc && ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--adaptive") == 0)
	{
		if (*i < argc)
		{
			(*i)++;
		}
		options->strategy = ADAPTIVE;
		if (*i < argc && ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--bench") == 0)
	{
		if (*i < argc)
		{
			(*i)++;
		}
		options->bench = 1;
		if (*i < argc && ft_strcmp(argv[2], "--simple") == 0)
		{
			(*i)++;
			options->strategy = SIMPLE;
		}
		else if (*i < argc && ft_strcmp(argv[2], "--medium") == 0)
		{
			(*i)++;
			options->strategy = MEDIUM;
		}
		else if (*i < argc && ft_strcmp(argv[2], "--complex") == 0)
		{
			(*i)++;
			options->strategy = COMPLEX;
		}
		else if (*i < argc && ft_strcmp(argv[2], "--adaptive") == 0)
		{
			(*i)++;
			options->strategy = ADAPTIVE;
		}
	}
}
