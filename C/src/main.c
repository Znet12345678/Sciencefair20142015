
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gtk/gtk.h>
#include <glib.h>

//Copyright (C) Zachary James Schlotman 2014-2015
GtkLabel *output;
GtkWidget *win;
        GtkWidget *o1;
        GtkWidget *t1;
        GtkWidget *th1;
        GtkWidget *f1;
        GtkWidget *fi1;
        GtkWidget *s1;
        GtkWidget *se1;
        GtkWidget *e1;
        GtkWidget *n1;
        GtkWidget *z1;
	GtkWidget *add1;
	GtkWidget *sub1;
	GtkWidget *mult1;
	GtkWidget *div1;
	GtkWidget *factorial;
	GtkWidget *exponent;
	GtkWidget *sinw;
	GtkWidget *cosw;
	GtkWidget *tanw;
	GtkWidget *equals;
	GtkWidget *clearbutton;
	 int badd;
	 int bsub;
	 int bmult;
	 int bdiv;
	const gchar *x1;

static void o (GtkWidget *widget,gpointer data)
{
	char txt[80];
	strcpy(txt,gtk_label_get_text(output));
	strcat(txt,"1");
	gtk_label_set_text(output,txt);
}
static void t (GtkWidget *widget,gpointer data)
{
	char txt[80];
	strcpy(txt,gtk_label_get_text(output));
	strcat(txt,"2");
	gtk_label_set_text(output,txt);
}

static void th (GtkWidget *widget,gpointer data)
{
       	char txt[80];
	strcpy(txt,gtk_label_get_text(output));
	strcat(txt,"3");
	gtk_label_set_text(output,txt);
}

static void f (GtkWidget *widget,gpointer data)
{
        char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"4");
        gtk_label_set_text(output,txt);

}

static void fi (GtkWidget *widget,gpointer data)
{
        char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"5");
        gtk_label_set_text(output,txt);

}

static void s (GtkWidget *widget,gpointer data)
{
        char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"6");
        gtk_label_set_text(output,txt);

}

static void se (GtkWidget *widget,gpointer data)
{
        char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"7");
        gtk_label_set_text(output,txt);

}

static void e (GtkWidget *widget,gpointer data)
{
	char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"8");
        gtk_label_set_text(output,txt);

}

static void n (GtkWidget *widget,gpointer data)
{
        char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"9");
        gtk_label_set_text(output,txt);

}

static void clearfunc(GtkWidget *w,gpointer data)
{
	gtk_label_set_text(output,"");
}
static void z (GtkWidget *widget,gpointer data)
{
       	char txt[80];
        strcpy(txt,gtk_label_get_text(output));
        strcat(txt,"3");
        gtk_label_set_text(output,txt);

}
static void addg(GtkWidget *w,gpointer data)
{
	badd = 1;
	bsub = 0;
	bmult = 0;
	bdiv = 0;
	strcpy(&x1,gtk_label_get_text(output));
//	g_print(x1);

	// x = gtk_label_get_text(output);
	gtk_label_set_text(output,"");
}
static void subg(GtkWidget *w,gpointer data)
{
	badd = 0;
	bsub = 1;
	bmult = 0;
	bdiv = 0;
	strcpy(&x1,gtk_label_get_text(output));
	gtk_label_set_text(output,"");

}
static void multg(GtkWidget *w,gpointer data)
{
	badd = 0;
	bsub = 0;
	bmult = 1;
	bdiv = 0;
	strcpy(&x1,gtk_label_get_text(output));
	gtk_label_set_text(output,"");
}
static void divg(GtkWidget *w,gpointer data)
{
	badd = 0;
	bsub = 0;
	bmult = 0;
	bdiv = 1;
	strcpy(&x1,gtk_label_get_text(output));
	gtk_label_set_text(output,"");
}
static void equalsp(GtkWidget *w,gpointer data)
{
	 const gchar *xe; //= gtk_label_get_text(output);
	strcpy(&xe,gtk_label_get_text(output));
	if (badd == 1)
	{
		gint i = atoi(&x1);
		gint i2 = atoi(&xe);
		gint a = (i+i2);
		const gchar *s;
		g_sprintf(&s,"%.d",a);
		gtk_label_set_text(output,&s);
	}
	else if (bsub == 1)
	{
		 gint i = atoi(&x1);
                gint i2 = atoi(&xe);
                gint a = (i-i2);
                const gchar *s;
                g_sprintf(&s,"%.d",a);
                gtk_label_set_text(output,&s);

	}
	else if (bmult == 1)
	{
		 gint i = atoi(&x1);
                gint i2 = atoi(&xe);
                gint a = (i*i2);
                const gchar *s;
                g_sprintf(&s,"%.d",a);
                gtk_label_set_text(output,&s);

	}
	else if (bdiv == 1)
	{
		 gint i = atoi(&x1);
                gint i2 = atoi(&xe);
                gint a = (i/i2);
                const gchar *s;
                g_sprintf(&s,"%.d",a);
                gtk_label_set_text(output,&s);

	}
	else
	{

	}
}
static gboolean delev( GtkWidget *widget, GdkEvent *ev,gpointer data )
{
	g_print ("");
	return FALSE;
}
static void mquit( GtkWidget *widget, gpointer data )
{
	gtk_main_quit();
}

int main(int argc, char ** argv)
{
/*	GtkWidget *win;
	GtkWidget *o1;
	GtkWidget *t1;
	GtkWidget *th1;
	GtkWidget *f1;
	GtkWidget *fi1;
	GtkWidget *s1;
	GtkWidget *se1;
	GtkWidget *e1;
	GtkWidget *n1;
	GtkWidget *z1;
*/
	GtkWidget *fixed;
	gtk_init(&argc,&argv);
	win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	g_signal_connect (win,"delev",G_CALLBACK(delev),NULL);
	g_signal_connect(win,"mquit",G_CALLBACK (mquit),NULL);
	gtk_container_set_border_width (GTK_CONTAINER (win),10);
	o1 = gtk_button_new_with_label("1");
	t1 = gtk_button_new_with_label("2");
	th1 = gtk_button_new_with_label("3");
	f1 = gtk_button_new_with_label("4");
	fi1 = gtk_button_new_with_label("5");
	s1 = gtk_button_new_with_label("6");
	se1 = gtk_button_new_with_label("7");
	e1 = gtk_button_new_with_label("8");
	n1 = gtk_button_new_with_label("9");
	z1 = gtk_button_new_with_label("0");
	add1 = gtk_button_new_with_label("+");
	sub1 = gtk_button_new_with_label("-");
	mult1 = gtk_button_new_with_label("X");
	div1 = gtk_button_new_with_label("/");
	output = gtk_label_new("");
	equals = gtk_button_new_with_label("=");
	fixed = gtk_fixed_new();
	clearbutton = gtk_button_new_with_label("C");
	g_signal_connect (o1,"clicked",G_CALLBACK(o),NULL);
	g_signal_connect (t1,"clicked",G_CALLBACK(t),NULL);
        g_signal_connect (th1,"clicked",G_CALLBACK(th),NULL);
	g_signal_connect (f1,"clicked",G_CALLBACK(f),NULL);
        g_signal_connect (fi1,"clicked",G_CALLBACK(fi),NULL);
        g_signal_connect (s1,"clicked",G_CALLBACK(s),NULL);
        g_signal_connect (se1,"clicked",G_CALLBACK(se),NULL);
        g_signal_connect (e1,"clicked",G_CALLBACK(e),NULL);
        g_signal_connect (n1,"clicked",G_CALLBACK(n),NULL);
        g_signal_connect (z1,"clicked",G_CALLBACK(z),NULL);
	g_signal_connect (add1,"clicked",G_CALLBACK(addg),NULL);
	g_signal_connect (sub1,"clicked",G_CALLBACK(subg),NULL);
	g_signal_connect (mult1,"clicked",G_CALLBACK(multg),NULL);
	g_signal_connect (div1,"clicked",G_CALLBACK(divg),NULL);
	g_signal_connect (equals,"clicked",G_CALLBACK(equalsp),NULL);
	g_signal_connect (clearbutton,"clicked",G_CALLBACK(clearfunc),NULL);
	gtk_window_set_default_size(GTK_WINDOW(win),200,500);
/*
	gtk_container_add(GTK_CONTAINER(win),o1);
	gtk_container_add(GTK_CONTAINER(win),t1);
        gtk_container_add(GTK_CONTAINER(win),th1);
       gtk_container_add(GTK_CONTAINER(win),f1);
	gtk_container_add(GTK_CONTAINER(win),fi1);
        gtk_container_add(GTK_CONTAINER(win),s1);
        gtk_container_add(GTK_CONTAINER(win),se1);
        gtk_container_add(GTK_CONTAINER(win),e1);
        gtk_container_add(GTK_CONTAINER(win),n1);
        gtk_container_add(GTK_CONTAINER(win),z1);
*/
        gtk_fixed_put(GTK_FIXED(fixed),o1,0,0);
	gtk_container_add(GTK_CONTAINER(win),fixed);
	gtk_widget_set_size_request(o1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),t1,55,0);
	gtk_widget_set_size_request(t1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),th1,110,0);
	gtk_widget_set_size_request(th1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),f1,0,55);
	gtk_widget_set_size_request(f1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),fi1,55,55);
	gtk_widget_set_size_request(fi1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),s1,110,55);
	gtk_widget_set_size_request(s1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),se1,0,110);
	gtk_widget_set_size_request(se1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),e1,55,110);
	gtk_widget_set_size_request(e1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),n1,110,110);
	gtk_widget_set_size_request(n1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),z1,55,165);
	gtk_widget_set_size_request(z1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),output,0,400);
	gtk_widget_set_size_request(output,200,50);
	gtk_fixed_put(GTK_FIXED(fixed),add1,0,165);
	gtk_widget_set_size_request(add1,50,50);
        gtk_fixed_put(GTK_FIXED(fixed),sub1,110,165);
	gtk_widget_set_size_request(sub1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),mult1,0,220);
	gtk_widget_set_size_request(mult1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),div1,110,220);
	gtk_widget_set_size_request(div1,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),equals,55,220);
	gtk_widget_set_size_request(equals,50,50);
	gtk_fixed_put(GTK_FIXED(fixed),clearbutton,55,275);
	gtk_widget_set_size_request(clearbutton,50,50);
	gtk_widget_show(fixed);
	gtk_widget_show(o1);
        gtk_widget_show(t1);
        gtk_widget_show(th1);
        gtk_widget_show(f1);
        gtk_widget_show(fi1);
        gtk_widget_show(s1);
        gtk_widget_show(se1);
        gtk_widget_show(e1);
        gtk_widget_show(n1);
        gtk_widget_show(z1);
	gtk_widget_show(clearbutton);
	gtk_widget_show(add1);
	gtk_widget_show(sub1);
	gtk_widget_show(mult1);
	gtk_widget_show(div1);
	gtk_widget_show(equals);
	gtk_widget_show(output);
	gtk_widget_show(win);
	gtk_main();
	return 0;
}
