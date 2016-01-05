using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

namespace csSample
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private Windows.UI.Core.CoreDispatcher m_dispatcher = null;

        public MainPage()
        {
            this.InitializeComponent();
            m_dispatcher = Windows.UI.Core.CoreWindow.GetForCurrentThread().Dispatcher;

            this.NavigationCacheMode = NavigationCacheMode.Required;
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.
        /// This parameter is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
            // TODO: Prepare page for display here.

            // TODO: If your application contains multiple pages, ensure that you are
            // handling the hardware Back button by registering for the
            // Windows.Phone.UI.Input.HardwareButtons.BackPressed event.
            // If you are using the NavigationHelper provided by some templates,
            // this event is handled for you.
        }

        private async void testHttpDownload()
        {
            Chilkat.Http http = new Chilkat.Http();

            textBox1.Text = "";

            bool success = http.UnlockComponent("Anything for 30-day trial.");
            if (!success)
            {
                textBox1.Text = http.LastErrorText;
                return;
            }

            // Add an event callback..
            http.PercentDone += http_PercentDone;

            Windows.Storage.StorageFolder localFolder = Windows.Storage.ApplicationData.Current.LocalFolder;

            //  Download a .zip from chilkatsoft.com
            string localFilePath = localFolder.Path + @"\hamlet.zip";
            success = await http.DownloadAsync("http://www.chilkatsoft.com/hamlet.zip", localFilePath);
            if (success != true)
            {
                textBox1.Text += "Failed!\r\n" + http.LastErrorText;
                return;
            }

            // The LastErrorText always contains information, even on success.  
            // It is detailed information for the programmer, not the end-user of an application.
            textBox1.Text += "Success!\r\n" + http.LastErrorText;

        }

        async void http_PercentDone(object sender, Chilkat.PercentDoneEventArgs eventArgs)
        {
            // Note: This callback happens in a background thread, and therefore to update
            // a control on the UI thread, we must do it this way:
            await m_dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
            {
                progressBar1.Value = eventArgs.PercentDone;
            });

        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            testHttpDownload();
        }
    }
}
