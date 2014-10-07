#include <stdio.h>
#include <gtk/gtk.h>
//Copyright (C) Zachary James Schlotman 2014-2015
static void o (GtkWidget *widget,gpointer data)
{
	g_print("1");
}
static void t (GtkWidget *widget,gpointer data)
{
        g_print("2");
}

static void th (GtkWidget *widget,gpointer data)
{
        g_print("3");
}

static void f (GtkWidget *widget,gpointer data)
{
        g_print("4");
}

static void fi (GtkWidget *widget,gpointer data)
{
        g_print("5");
}

static void s (GtkWidget *widget,gpointer data)
{
        g_print("6");
}

static void se (GtkWidget *widget,gpointer data)
{
        g_print("7");
}

static void e (GtkWidget *widget,gpointer data)
{
        g_print("8");
}

static void n (GtkWidget *widget,gpointer data)
{
        g_print("9");
}

static void z (GtkWidget *widget,gpointer data)
{
        g_print("0");
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

	gtk_widget_show(win);
	gtk_main();
	return 0;
}
