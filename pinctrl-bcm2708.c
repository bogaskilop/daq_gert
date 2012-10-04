  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>linux/drivers/pinctrl/pinctrl-bcm2708.c at rpi-linear · lp0/linux</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon-precomposed" sizes="57x57" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="114x114" href="apple-touch-icon-114.png" />
    <link rel="apple-touch-icon-precomposed" sizes="72x72" href="apple-touch-icon-144.png" />
    <link rel="apple-touch-icon-precomposed" sizes="144x144" href="apple-touch-icon-144.png" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.png" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="u+rOGTV1yfcNOB6YFkyt11ZBgYPNPLvTNf2fG3wBTvw=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-001199dc5b9c642f6ffebe10bbb5e75bc850601a.css" media="screen" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-b41bff8221efadad18d58c3f612f0a3f9cf45168.css" media="screen" rel="stylesheet" type="text/css" />
    


    <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-974473a941a983b46f11833dc8ffba8414698ff7.js" type="text/javascript"></script>
    <script defer="defer" src="https://a248.e.akamai.net/assets.github.com/assets/github-71907ce2b2d3459410122b4b93a994be7662eca3.js" type="text/javascript"></script>
    

      <link rel='permalink' href='/lp0/linux/blob/6de36545990e40ee94c2fc3817a7f8e21aa11710/drivers/pinctrl/pinctrl-bcm2708.c'>
    <meta property="og:title" content="linux"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/lp0/linux"/>
    <meta property="og:image" content="https://a248.e.akamai.net/assets.github.com/images/gravatars/gravatar-user-420.png?1345673562"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Linux kernel source tree. Contribute to linux development by creating an account on GitHub."/>

    <meta name="description" content="Linux kernel source tree. Contribute to linux development by creating an account on GitHub." />
  <link href="https://github.com/lp0/linux/commits/rpi-linear.atom" rel="alternate" title="Recent Commits to linux:rpi-linear" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob linux vis-public fork env-production ">
    <div id="wrapper">

    
    

      <div id="header" class="true clearfix">
        <div class="container clearfix">
          <a class="site-logo " href="https://github.com/">
            <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1337118071" />
            <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1337118071" />
          </a>

            <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
              <span class="mail-status all-read"></span>
            </a>

              
    <div class="topsearch command-bar-activated">
      <form accept-charset="UTF-8" action="/search" class="command_bar_form" id="top_search_form" method="get">
  <a href="/search" class="advanced-search tooltipped downwards command-bar-search" id="advanced_search" title="Advanced Search"><span class="mini-icon mini-icon-advanced-search "></span></a>
  <input type="text" name="q" id="command-bar" placeholder="Search or Type a Command" tabindex="1" />
  <span class="mini-icon help tooltipped downwards" title="Show Command Bar Help"></span>
  <input type="hidden" name="type" value="Everything" />
  <input type="hidden" name="repo" value="" />
  <input type="hidden" name="langOverride" value="" />
  <input type="hidden" name="start_value" value="1" />
</form>

      <ul class="top-nav">
          <li class="explore"><a href="https://github.com/explore">Explore</a></li>
          <li><a href="https://gist.github.com">Gist</a></li>
          <li><a href="/blog">Blog</a></li>
        <li><a href="http://help.github.com">Help</a></li>
      </ul>
    </div>


            

  
  <div id="userbox">
    <div id="user">
      <a href="https://github.com/nsaspook"><img height="20" src="https://secure.gravatar.com/avatar/e686fc5db5b62dcb69d02f194f62f893?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>
      <a href="https://github.com/nsaspook" class="name">nsaspook</a>
    </div>
    <ul id="user-links">
      <li>
        <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a New Repo"><span class="mini-icon mini-icon-create"></span></a>
      </li>
      <li>
        <a href="/settings/profile" id="account_settings"
          class="tooltipped downwards"
          title="Account Settings ">
          <span class="mini-icon mini-icon-account-settings"></span>
        </a>
      </li>
      <li>
          <a href="/logout" data-method="post" id="logout" class="tooltipped downwards" title="Sign Out">
            <span class="mini-icon mini-icon-logout"></span>
          </a>
      </li>
    </ul>
  </div>



          
        </div>
      </div>

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu">
          <div class="container">
            <div class="title-actions-bar">
              


                  <ul class="pagehead-actions">

          <li class="subscription">
              <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="u+rOGTV1yfcNOB6YFkyt11ZBgYPNPLvTNf2fG3wBTvw=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="4235365" />
  <div class="context-menu-container js-menu-container js-context-menu">
    <span class="minibutton switcher bigger js-menu-target">
      <span class="js-context-button">
          <span class="mini-icon mini-icon-watching"></span>Watch
      </span>
    </span>

    <div class="context-pane js-menu-content">
      <a href="javascript:;" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
      <div class="context-title">Notification status</div>

      <div class="context-body pane-selector">
        <ul class="js-navigation-container">
          <li class="selector-item js-navigation-item js-navigation-target selected">
            <span class="mini-icon mini-icon-confirm"></span>
            <label>
              <input checked="checked" id="do_included" name="do" type="radio" value="included" />
              <h4>Not watching</h4>
              <p>You will only receive notifications when you participate or are mentioned.</p>
            </label>
            <span class="context-button-text js-context-button-text">
              <span class="mini-icon mini-icon-watching"></span>
              Watch
            </span>
          </li>
          <li class="selector-item js-navigation-item js-navigation-target ">
            <span class="mini-icon mini-icon-confirm"></span>
            <label>
              <input id="do_subscribed" name="do" type="radio" value="subscribed" />
              <h4>Watching</h4>
              <p>You will receive all notifications for this repository.</p>
            </label>
            <span class="context-button-text js-context-button-text">
              <span class="mini-icon mini-icon-unwatch"></span>
              Unwatch
            </span>
          </li>
          <li class="selector-item js-navigation-item js-navigation-target ">
            <span class="mini-icon mini-icon-confirm"></span>
            <label>
              <input id="do_ignore" name="do" type="radio" value="ignore" />
              <h4>Ignored</h4>
              <p>You will not receive notifications for this repository.</p>
            </label>
            <span class="context-button-text js-context-button-text">
              <span class="mini-icon mini-icon-mute"></span>
              Stop ignoring
            </span>
          </li>
        </ul>
      </div>
    </div>
  </div>
</form>
          </li>

          <li class="js-toggler-container js-social-container starring-container ">
            <a href="/lp0/linux/unstar" class="minibutton js-toggler-target starred" data-remote="true" data-method="post" rel="nofollow">
              <span class="mini-icon mini-icon-star"></span>Unstar
            </a><a href="/lp0/linux/star" class="minibutton js-toggler-target unstarred" data-remote="true" data-method="post" rel="nofollow">
              <span class="mini-icon mini-icon-star"></span>Star
            </a><a class="social-count js-social-count" href="/lp0/linux/stargazers">9</a>
          </li>

              <li><a href="/lp0/linux/fork" class="minibutton js-toggler-target fork-button lighter" rel="nofollow" data-method="post"><span class="mini-icon mini-icon-fork"></span>Fork</a><a href="/lp0/linux/network" class="social-count">1,272</a>
              </li>


    </ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-repo-forked"></span>
                <span class="author vcard">
                  <a href="/lp0" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">lp0</span>
                  </a></span> /
                <strong><a href="/lp0/linux" class="js-current-repository">linux</a></strong>
                  <span class="fork-flag">
                    <span class="text">forked from <a href="/torvalds/linux">torvalds/linux</a></span>
                  </span>
              </h1>
            </div>

            

  <ul class="tabs">
    <li><a href="/lp0/linux/tree/rpi-linear" class="selected" highlight="repo_sourcerepo_downloadsrepo_commitsrepo_tagsrepo_branches">Code</a></li>
    <li><a href="/lp0/linux/network" highlight="repo_network">Network</a></li>
    <li><a href="/lp0/linux/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>




    <li><a href="/lp0/linux/graphs" highlight="repo_graphsrepo_contributors">Graphs</a></li>


  </ul>
  
<div class="frame frame-center tree-finder" style="display:none"
      data-tree-list-url="/lp0/linux/tree-list/6de36545990e40ee94c2fc3817a7f8e21aa11710"
      data-blob-url-prefix="/lp0/linux/blob/6de36545990e40ee94c2fc3817a7f8e21aa11710"
    >

  <div class="breadcrumb">
    <span class="bold"><a href="/lp0/linux">linux</a></span> /
    <input class="tree-finder-input js-navigation-enable" type="text" name="query" autocomplete="off" spellcheck="false">
  </div>

    <div class="octotip">
      <p>
        <a href="/lp0/linux/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever" rel="nofollow">Dismiss</a>
        <span class="bold">Octotip:</span> You've activated the <em>file finder</em>
        by pressing <span class="kbd">t</span> Start typing to filter the
        file list. Use <span class="kbd badmono">↑</span> and
        <span class="kbd badmono">↓</span> to navigate,
        <span class="kbd">enter</span> to view files.
      </p>
    </div>

  <table class="tree-browser" cellpadding="0" cellspacing="0">
    <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
    <tr class="js-no-results no-results" style="display: none">
      <th colspan="2">No matching files</th>
    </tr>
    <tbody class="js-results-list js-navigation-container">
    </tbody>
  </table>
</div>

<div id="jump-to-line" style="display:none">
  <h2>Jump to Line</h2>
  <form accept-charset="UTF-8">
    <input class="textfield" type="text">
    <div class="full-button">
      <button type="submit" class="classy">
        Go
      </button>
    </div>
  </form>
</div>


<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
      <li><a href="/lp0/linux/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">310</span></a></li>
      <li><a href="/lp0/linux/downloads" class="tabnav-tab" highlight="repo_downloads">Downloads <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">

    <div class="context-menu-container js-menu-container js-context-menu">
      <a href="#"
         class="minibutton bigger switcher js-menu-target js-commitish-button btn-branch repo-tree"
         data-hotkey="w"
         data-master-branch="master"
         data-ref="rpi-linear">
         <span><em class="mini-icon mini-icon-branch"></em><i>branch:</i> rpi-linear</span>
      </a>

      <div class="context-pane commitish-context js-menu-content">
        <a href="javascript:;" class="close js-menu-close"><span class="mini-icon mini-icon-remove-close"></span></a>
        <div class="context-title">Switch branches/tags</div>
        <div class="context-body pane-selector commitish-selector js-navigation-container">
          <div class="filterbar">
            <input type="text" id="context-commitish-filter-field" class="js-navigation-enable" placeholder="Filter branches/tags" data-filterable />
            <ul class="tabs">
              <li><a href="#" data-filter="branches" class="selected">Branches</a></li>
              <li><a href="#" data-filter="tags">Tags</a></li>
            </ul>
          </div>

          <div class="js-filter-tab js-filter-branches" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/master/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="master" rel="nofollow">master</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/raspberrypi-3.3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="raspberrypi-3.3" rel="nofollow">raspberrypi-3.3</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-bell/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-bell" rel="nofollow">rpi-bell</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-boot/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-boot" rel="nofollow">rpi-boot</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-dma-hack/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-dma-hack" rel="nofollow">rpi-dma-hack</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target selected">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-linear" rel="nofollow">rpi-linear</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-next/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-next" rel="nofollow">rpi-next</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-patches-fb-mbox-fix/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-patches-fb-mbox-fix" rel="nofollow">rpi-patches-fb-mbox-fix</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-split/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-split" rel="nofollow">rpi-split</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-usb/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-usb" rel="nofollow">rpi-usb</a>
                </h4>
              </div>
              <div class="commitish-item branch-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-usb2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-usb2" rel="nofollow">rpi-usb2</a>
                </h4>
              </div>
          </div>

          <div class="js-filter-tab js-filter-tags " style="display:none" data-filterable-for="context-commitish-filter-field" data-filterable-type=substring>
            <div class="no-results js-not-filterable">Nothing to show</div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.4-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.4-rc5" rel="nofollow">v3.4-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.4-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.4-rc4" rel="nofollow">v3.4-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.4-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.4-rc3" rel="nofollow">v3.4-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.4-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.4-rc2" rel="nofollow">v3.4-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.4-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.4-rc1" rel="nofollow">v3.4-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc7" rel="nofollow">v3.3-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc6" rel="nofollow">v3.3-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc5" rel="nofollow">v3.3-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc4" rel="nofollow">v3.3-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc3" rel="nofollow">v3.3-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc2" rel="nofollow">v3.3-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3-rc1" rel="nofollow">v3.3-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.3" rel="nofollow">v3.3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc7" rel="nofollow">v3.2-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc6" rel="nofollow">v3.2-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc5" rel="nofollow">v3.2-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc4" rel="nofollow">v3.2-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc3" rel="nofollow">v3.2-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc2" rel="nofollow">v3.2-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2-rc1" rel="nofollow">v3.2-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.2" rel="nofollow">v3.2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc10/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc10" rel="nofollow">v3.1-rc10</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc9" rel="nofollow">v3.1-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc8" rel="nofollow">v3.1-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc7" rel="nofollow">v3.1-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc6" rel="nofollow">v3.1-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc5" rel="nofollow">v3.1-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc4" rel="nofollow">v3.1-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc3" rel="nofollow">v3.1-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc2" rel="nofollow">v3.1-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1-rc1" rel="nofollow">v3.1-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.1" rel="nofollow">v3.1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc7" rel="nofollow">v3.0-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc6" rel="nofollow">v3.0-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc5" rel="nofollow">v3.0-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc4" rel="nofollow">v3.0-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc3" rel="nofollow">v3.0-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc2" rel="nofollow">v3.0-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0-rc1" rel="nofollow">v3.0-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v3.0/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v3.0" rel="nofollow">v3.0</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc7" rel="nofollow">v2.6.39-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc6" rel="nofollow">v2.6.39-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc5" rel="nofollow">v2.6.39-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc4" rel="nofollow">v2.6.39-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc3" rel="nofollow">v2.6.39-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc2" rel="nofollow">v2.6.39-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39-rc1" rel="nofollow">v2.6.39-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.39/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.39" rel="nofollow">v2.6.39</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc8" rel="nofollow">v2.6.38-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc7" rel="nofollow">v2.6.38-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc6" rel="nofollow">v2.6.38-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc5" rel="nofollow">v2.6.38-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc4" rel="nofollow">v2.6.38-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc3" rel="nofollow">v2.6.38-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc2" rel="nofollow">v2.6.38-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38-rc1" rel="nofollow">v2.6.38-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.38/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.38" rel="nofollow">v2.6.38</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc8" rel="nofollow">v2.6.37-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc7" rel="nofollow">v2.6.37-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc6" rel="nofollow">v2.6.37-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc5" rel="nofollow">v2.6.37-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc4" rel="nofollow">v2.6.37-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc3" rel="nofollow">v2.6.37-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc2" rel="nofollow">v2.6.37-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37-rc1" rel="nofollow">v2.6.37-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.37/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.37" rel="nofollow">v2.6.37</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc8" rel="nofollow">v2.6.36-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc7" rel="nofollow">v2.6.36-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc6" rel="nofollow">v2.6.36-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc5" rel="nofollow">v2.6.36-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc4" rel="nofollow">v2.6.36-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc3" rel="nofollow">v2.6.36-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc2" rel="nofollow">v2.6.36-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36-rc1" rel="nofollow">v2.6.36-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.36/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.36" rel="nofollow">v2.6.36</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc6" rel="nofollow">v2.6.35-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc5" rel="nofollow">v2.6.35-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc4" rel="nofollow">v2.6.35-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc3" rel="nofollow">v2.6.35-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc2" rel="nofollow">v2.6.35-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35-rc1" rel="nofollow">v2.6.35-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.35/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.35" rel="nofollow">v2.6.35</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc7" rel="nofollow">v2.6.34-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc6" rel="nofollow">v2.6.34-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc5" rel="nofollow">v2.6.34-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc4" rel="nofollow">v2.6.34-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc3" rel="nofollow">v2.6.34-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc2" rel="nofollow">v2.6.34-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34-rc1" rel="nofollow">v2.6.34-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.34/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.34" rel="nofollow">v2.6.34</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc8" rel="nofollow">v2.6.33-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc7" rel="nofollow">v2.6.33-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc6" rel="nofollow">v2.6.33-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc5" rel="nofollow">v2.6.33-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc4" rel="nofollow">v2.6.33-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc3" rel="nofollow">v2.6.33-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc2" rel="nofollow">v2.6.33-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33-rc1" rel="nofollow">v2.6.33-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.33/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.33" rel="nofollow">v2.6.33</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc8" rel="nofollow">v2.6.32-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc7" rel="nofollow">v2.6.32-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc6" rel="nofollow">v2.6.32-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc5" rel="nofollow">v2.6.32-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc4" rel="nofollow">v2.6.32-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc3" rel="nofollow">v2.6.32-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc2" rel="nofollow">v2.6.32-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32-rc1" rel="nofollow">v2.6.32-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.32/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.32" rel="nofollow">v2.6.32</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc9" rel="nofollow">v2.6.31-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc8" rel="nofollow">v2.6.31-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc7" rel="nofollow">v2.6.31-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc6" rel="nofollow">v2.6.31-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc5" rel="nofollow">v2.6.31-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc4" rel="nofollow">v2.6.31-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc3" rel="nofollow">v2.6.31-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc2" rel="nofollow">v2.6.31-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31-rc1" rel="nofollow">v2.6.31-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.31/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.31" rel="nofollow">v2.6.31</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc8" rel="nofollow">v2.6.30-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc7" rel="nofollow">v2.6.30-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc6" rel="nofollow">v2.6.30-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc5" rel="nofollow">v2.6.30-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc4" rel="nofollow">v2.6.30-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc3" rel="nofollow">v2.6.30-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc2" rel="nofollow">v2.6.30-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30-rc1" rel="nofollow">v2.6.30-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.30/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.30" rel="nofollow">v2.6.30</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc8" rel="nofollow">v2.6.29-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc7" rel="nofollow">v2.6.29-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc6" rel="nofollow">v2.6.29-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc5" rel="nofollow">v2.6.29-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc4" rel="nofollow">v2.6.29-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc3" rel="nofollow">v2.6.29-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc2" rel="nofollow">v2.6.29-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29-rc1" rel="nofollow">v2.6.29-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.29/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.29" rel="nofollow">v2.6.29</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc9" rel="nofollow">v2.6.28-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc8" rel="nofollow">v2.6.28-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc7" rel="nofollow">v2.6.28-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc6" rel="nofollow">v2.6.28-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc5" rel="nofollow">v2.6.28-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc4" rel="nofollow">v2.6.28-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc3" rel="nofollow">v2.6.28-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc2" rel="nofollow">v2.6.28-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28-rc1" rel="nofollow">v2.6.28-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.28/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.28" rel="nofollow">v2.6.28</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc9" rel="nofollow">v2.6.27-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc8" rel="nofollow">v2.6.27-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc7" rel="nofollow">v2.6.27-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc6" rel="nofollow">v2.6.27-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc5" rel="nofollow">v2.6.27-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc4" rel="nofollow">v2.6.27-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc3" rel="nofollow">v2.6.27-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc2" rel="nofollow">v2.6.27-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27-rc1" rel="nofollow">v2.6.27-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.27/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.27" rel="nofollow">v2.6.27</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc9" rel="nofollow">v2.6.26-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc8" rel="nofollow">v2.6.26-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc7" rel="nofollow">v2.6.26-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc6" rel="nofollow">v2.6.26-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc5" rel="nofollow">v2.6.26-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc4" rel="nofollow">v2.6.26-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc3" rel="nofollow">v2.6.26-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc2" rel="nofollow">v2.6.26-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26-rc1" rel="nofollow">v2.6.26-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.26/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.26" rel="nofollow">v2.6.26</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc9" rel="nofollow">v2.6.25-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc8" rel="nofollow">v2.6.25-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc7" rel="nofollow">v2.6.25-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc6" rel="nofollow">v2.6.25-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc5" rel="nofollow">v2.6.25-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc4" rel="nofollow">v2.6.25-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc3" rel="nofollow">v2.6.25-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc2" rel="nofollow">v2.6.25-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25-rc1" rel="nofollow">v2.6.25-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.25/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.25" rel="nofollow">v2.6.25</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc8" rel="nofollow">v2.6.24-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc7" rel="nofollow">v2.6.24-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc6" rel="nofollow">v2.6.24-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc5" rel="nofollow">v2.6.24-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc4" rel="nofollow">v2.6.24-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc3" rel="nofollow">v2.6.24-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc2" rel="nofollow">v2.6.24-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24-rc1" rel="nofollow">v2.6.24-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.24/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.24" rel="nofollow">v2.6.24</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc9/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc9" rel="nofollow">v2.6.23-rc9</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc8/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc8" rel="nofollow">v2.6.23-rc8</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc7" rel="nofollow">v2.6.23-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc6" rel="nofollow">v2.6.23-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc5" rel="nofollow">v2.6.23-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc4" rel="nofollow">v2.6.23-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc3" rel="nofollow">v2.6.23-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc2" rel="nofollow">v2.6.23-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23-rc1" rel="nofollow">v2.6.23-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.23/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.23" rel="nofollow">v2.6.23</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc7" rel="nofollow">v2.6.22-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc6" rel="nofollow">v2.6.22-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc5" rel="nofollow">v2.6.22-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc4" rel="nofollow">v2.6.22-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc3" rel="nofollow">v2.6.22-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc2" rel="nofollow">v2.6.22-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22-rc1" rel="nofollow">v2.6.22-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.22/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.22" rel="nofollow">v2.6.22</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc7" rel="nofollow">v2.6.21-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc6" rel="nofollow">v2.6.21-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc5" rel="nofollow">v2.6.21-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc4" rel="nofollow">v2.6.21-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc3" rel="nofollow">v2.6.21-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc2" rel="nofollow">v2.6.21-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21-rc1" rel="nofollow">v2.6.21-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.21/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.21" rel="nofollow">v2.6.21</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc7" rel="nofollow">v2.6.20-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc6" rel="nofollow">v2.6.20-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc5" rel="nofollow">v2.6.20-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc4" rel="nofollow">v2.6.20-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc3" rel="nofollow">v2.6.20-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc2" rel="nofollow">v2.6.20-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20-rc1" rel="nofollow">v2.6.20-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.20/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.20" rel="nofollow">v2.6.20</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc6" rel="nofollow">v2.6.19-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc5" rel="nofollow">v2.6.19-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc4" rel="nofollow">v2.6.19-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc3" rel="nofollow">v2.6.19-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc2" rel="nofollow">v2.6.19-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19-rc1" rel="nofollow">v2.6.19-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.19/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.19" rel="nofollow">v2.6.19</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc7" rel="nofollow">v2.6.18-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc6" rel="nofollow">v2.6.18-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc5" rel="nofollow">v2.6.18-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc4" rel="nofollow">v2.6.18-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc3" rel="nofollow">v2.6.18-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc2" rel="nofollow">v2.6.18-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18-rc1" rel="nofollow">v2.6.18-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.18/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.18" rel="nofollow">v2.6.18</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc6" rel="nofollow">v2.6.17-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc5" rel="nofollow">v2.6.17-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc4" rel="nofollow">v2.6.17-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc3" rel="nofollow">v2.6.17-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc2" rel="nofollow">v2.6.17-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17-rc1" rel="nofollow">v2.6.17-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.17/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.17" rel="nofollow">v2.6.17</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc6" rel="nofollow">v2.6.16-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc5" rel="nofollow">v2.6.16-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc4" rel="nofollow">v2.6.16-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc3" rel="nofollow">v2.6.16-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc2" rel="nofollow">v2.6.16-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16-rc1" rel="nofollow">v2.6.16-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.16/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.16" rel="nofollow">v2.6.16</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc7" rel="nofollow">v2.6.15-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc6" rel="nofollow">v2.6.15-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc5" rel="nofollow">v2.6.15-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc4" rel="nofollow">v2.6.15-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc3" rel="nofollow">v2.6.15-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc2" rel="nofollow">v2.6.15-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15-rc1" rel="nofollow">v2.6.15-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.15/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.15" rel="nofollow">v2.6.15</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14-rc5" rel="nofollow">v2.6.14-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14-rc4" rel="nofollow">v2.6.14-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14-rc3" rel="nofollow">v2.6.14-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14-rc2" rel="nofollow">v2.6.14-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14-rc1" rel="nofollow">v2.6.14-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.14/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.14" rel="nofollow">v2.6.14</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc7/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc7" rel="nofollow">v2.6.13-rc7</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc6" rel="nofollow">v2.6.13-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc5" rel="nofollow">v2.6.13-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc4" rel="nofollow">v2.6.13-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc3" rel="nofollow">v2.6.13-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc2" rel="nofollow">v2.6.13-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13-rc1/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13-rc1" rel="nofollow">v2.6.13-rc1</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.13/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.13" rel="nofollow">v2.6.13</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12-rc6/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12-rc6" rel="nofollow">v2.6.12-rc6</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12-rc5/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12-rc5" rel="nofollow">v2.6.12-rc5</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12-rc4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12-rc4" rel="nofollow">v2.6.12-rc4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12-rc3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12-rc3" rel="nofollow">v2.6.12-rc3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12-rc2/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12-rc2" rel="nofollow">v2.6.12-rc2</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.12/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.12" rel="nofollow">v2.6.12</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.11-tree/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.11-tree" rel="nofollow">v2.6.11-tree</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/v2.6.11/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="v2.6.11" rel="nofollow">v2.6.11</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120615-dma/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120615-dma" rel="nofollow">rpi-old-20120615-dma</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120609-dma/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120609-dma" rel="nofollow">rpi-old-20120609-dma</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120520-gpio/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120520-gpio" rel="nofollow">rpi-old-20120520-gpio</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120514-mbox/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120514-mbox" rel="nofollow">rpi-old-20120514-mbox</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120514-fb/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120514-fb" rel="nofollow">rpi-old-20120514-fb</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120513-watchdog/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120513-watchdog" rel="nofollow">rpi-old-20120513-watchdog</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120512-clock/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120512-clock" rel="nofollow">rpi-old-20120512-clock</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-old-20120511-irq/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-old-20120511-irq" rel="nofollow">rpi-old-20120511-irq</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-obsolete-3.4/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-obsolete-3.4" rel="nofollow">rpi-obsolete-3.4</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-obsolete-3.3/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-obsolete-3.3" rel="nofollow">rpi-obsolete-3.3</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-minimal-20120512/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-minimal-20120512" rel="nofollow">rpi-minimal-20120512</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120620-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120620-linear" rel="nofollow">rpi-3.5-20120620-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120620/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120620" rel="nofollow">rpi-3.5-20120620</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120615-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120615-linear" rel="nofollow">rpi-3.5-20120615-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120615/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120615" rel="nofollow">rpi-3.5-20120615</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120611-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120611-linear" rel="nofollow">rpi-3.5-20120611-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120611/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120611" rel="nofollow">rpi-3.5-20120611</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120610-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120610-linear" rel="nofollow">rpi-3.5-20120610-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120610/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120610" rel="nofollow">rpi-3.5-20120610</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1713-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1713-linear" rel="nofollow">rpi-3.5-20120609-1713-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1713/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1713" rel="nofollow">rpi-3.5-20120609-1713</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1150-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1150-linear" rel="nofollow">rpi-3.5-20120609-1150-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1150/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1150" rel="nofollow">rpi-3.5-20120609-1150</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1148-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1148-linear" rel="nofollow">rpi-3.5-20120609-1148-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120609-1148/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120609-1148" rel="nofollow">rpi-3.5-20120609-1148</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120603/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120603" rel="nofollow">rpi-3.5-20120603</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120529-2242-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120529-2242-linear" rel="nofollow">rpi-3.5-20120529-2242-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.5-20120529-2242/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.5-20120529-2242" rel="nofollow">rpi-3.5-20120529-2242</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.4-20120529-2229-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.4-20120529-2229-linear" rel="nofollow">rpi-3.4-20120529-2229-linear</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.4-20120529-2229/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.4-20120529-2229" rel="nofollow">rpi-3.4-20120529-2229</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.4-20120521-0105/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.4-20120521-0105" rel="nofollow">rpi-3.4-20120521-0105</a>
                </h4>
              </div>
              <div class="commitish-item tag-commitish selector-item js-navigation-item js-navigation-target ">
                <span class="mini-icon mini-icon-confirm"></span>
                <h4>
                    <a href="/lp0/linux/blob/rpi-3.4-20120421-0105/drivers/pinctrl/pinctrl-bcm2708.c" class="js-navigation-open" data-name="rpi-3.4-20120421-0105" rel="nofollow">rpi-3.4-20120421-0105</a>
                </h4>
              </div>
          </div>
        </div>
      </div><!-- /.commitish-context-context -->
    </div>
  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/lp0/linux/tree/rpi-linear" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/lp0/linux/commits/rpi-linear" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/lp0/linux/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">11</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:74a7039b723502b86659ea43bf7fb04f -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:74a7039b723502b86659ea43bf7fb04f -->

<!-- block_view_fragment_key: views10/v8/blob:v21:c379dd3896cfb0f8b9e9e6c5301aced1 -->

  <div id="slider">

    <div class="breadcrumb" data-path="drivers/pinctrl/pinctrl-bcm2708.c/">
      <b itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/lp0/linux/tree/6de36545990e40ee94c2fc3817a7f8e21aa11710" class="js-rewrite-sha" itemprop="url"><span itemprop="title">linux</span></a></b> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/lp0/linux/tree/6de36545990e40ee94c2fc3817a7f8e21aa11710/drivers" class="js-rewrite-sha" itemscope="url"><span itemprop="title">drivers</span></a></span> / <span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/lp0/linux/tree/6de36545990e40ee94c2fc3817a7f8e21aa11710/drivers/pinctrl" class="js-rewrite-sha" itemscope="url"><span itemprop="title">pinctrl</span></a></span> / <strong class="final-path">pinctrl-bcm2708.c</strong> <span class="js-clippy mini-icon mini-icon-clippy " data-clipboard-text="drivers/pinctrl/pinctrl-bcm2708.c" data-copied-hint="copied!" data-copy-hint="copy to clipboard"></span>
    </div>

      
  <div class="commit file-history-tease js-blob-contributors-content" data-path="drivers/pinctrl/pinctrl-bcm2708.c/">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/9e388be65e446a36a87bb463a93ec929?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author">Simon Arlott</span>
    <time class="js-relative-date" datetime="2012-06-16T09:20:51-07:00" title="2012-06-16 09:20:51">June 16, 2012</time>
    <div class="commit-title">
        <a href="/lp0/linux/commit/9faa82095fb0979bbe4357e254c8715b26189432" class="message">pinctrl-bcm2708: add bank id to interrupt name</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2>Users on GitHub who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li>
          <img height="24" src="https://secure.gravatar.com/avatar/1162ace90604dc92ae7072c4c12f7303?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/bootc">bootc</a>
        </li>
      </ul>
    </div>
  </div>


    <div class="frames">
      <div class="frame frame-center" data-path="drivers/pinctrl/pinctrl-bcm2708.c/" data-permalink-url="/lp0/linux/blob/6de36545990e40ee94c2fc3817a7f8e21aa11710/drivers/pinctrl/pinctrl-bcm2708.c" data-title="linux/drivers/pinctrl/pinctrl-bcm2708.c at rpi-linear · lp0/linux · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>1104 lines (936 sloc)</span>
                <span>28.921 kb</span>
              </div>
              <ul class="button-group actions">
                  <li>
                    <a class="grouped-button file-edit-link minibutton bigger lighter js-rewrite-sha" href="/lp0/linux/edit/6de36545990e40ee94c2fc3817a7f8e21aa11710/drivers/pinctrl/pinctrl-bcm2708.c" data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  </li>
                <li>
                  <a href="/lp0/linux/raw/rpi-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="minibutton grouped-button bigger lighter" id="raw-url">Raw</a>
                </li>
                  <li>
                    <a href="/lp0/linux/blame/rpi-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="minibutton grouped-button bigger lighter">Blame</a>
                  </li>
                <li>
                  <a href="/lp0/linux/commits/rpi-linear/drivers/pinctrl/pinctrl-bcm2708.c" class="minibutton grouped-button bigger lighter" rel="nofollow">History</a>
                </li>
              </ul>
            </div>
              <div class="data type-c">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
<span id="L752" rel="#L752">752</span>
<span id="L753" rel="#L753">753</span>
<span id="L754" rel="#L754">754</span>
<span id="L755" rel="#L755">755</span>
<span id="L756" rel="#L756">756</span>
<span id="L757" rel="#L757">757</span>
<span id="L758" rel="#L758">758</span>
<span id="L759" rel="#L759">759</span>
<span id="L760" rel="#L760">760</span>
<span id="L761" rel="#L761">761</span>
<span id="L762" rel="#L762">762</span>
<span id="L763" rel="#L763">763</span>
<span id="L764" rel="#L764">764</span>
<span id="L765" rel="#L765">765</span>
<span id="L766" rel="#L766">766</span>
<span id="L767" rel="#L767">767</span>
<span id="L768" rel="#L768">768</span>
<span id="L769" rel="#L769">769</span>
<span id="L770" rel="#L770">770</span>
<span id="L771" rel="#L771">771</span>
<span id="L772" rel="#L772">772</span>
<span id="L773" rel="#L773">773</span>
<span id="L774" rel="#L774">774</span>
<span id="L775" rel="#L775">775</span>
<span id="L776" rel="#L776">776</span>
<span id="L777" rel="#L777">777</span>
<span id="L778" rel="#L778">778</span>
<span id="L779" rel="#L779">779</span>
<span id="L780" rel="#L780">780</span>
<span id="L781" rel="#L781">781</span>
<span id="L782" rel="#L782">782</span>
<span id="L783" rel="#L783">783</span>
<span id="L784" rel="#L784">784</span>
<span id="L785" rel="#L785">785</span>
<span id="L786" rel="#L786">786</span>
<span id="L787" rel="#L787">787</span>
<span id="L788" rel="#L788">788</span>
<span id="L789" rel="#L789">789</span>
<span id="L790" rel="#L790">790</span>
<span id="L791" rel="#L791">791</span>
<span id="L792" rel="#L792">792</span>
<span id="L793" rel="#L793">793</span>
<span id="L794" rel="#L794">794</span>
<span id="L795" rel="#L795">795</span>
<span id="L796" rel="#L796">796</span>
<span id="L797" rel="#L797">797</span>
<span id="L798" rel="#L798">798</span>
<span id="L799" rel="#L799">799</span>
<span id="L800" rel="#L800">800</span>
<span id="L801" rel="#L801">801</span>
<span id="L802" rel="#L802">802</span>
<span id="L803" rel="#L803">803</span>
<span id="L804" rel="#L804">804</span>
<span id="L805" rel="#L805">805</span>
<span id="L806" rel="#L806">806</span>
<span id="L807" rel="#L807">807</span>
<span id="L808" rel="#L808">808</span>
<span id="L809" rel="#L809">809</span>
<span id="L810" rel="#L810">810</span>
<span id="L811" rel="#L811">811</span>
<span id="L812" rel="#L812">812</span>
<span id="L813" rel="#L813">813</span>
<span id="L814" rel="#L814">814</span>
<span id="L815" rel="#L815">815</span>
<span id="L816" rel="#L816">816</span>
<span id="L817" rel="#L817">817</span>
<span id="L818" rel="#L818">818</span>
<span id="L819" rel="#L819">819</span>
<span id="L820" rel="#L820">820</span>
<span id="L821" rel="#L821">821</span>
<span id="L822" rel="#L822">822</span>
<span id="L823" rel="#L823">823</span>
<span id="L824" rel="#L824">824</span>
<span id="L825" rel="#L825">825</span>
<span id="L826" rel="#L826">826</span>
<span id="L827" rel="#L827">827</span>
<span id="L828" rel="#L828">828</span>
<span id="L829" rel="#L829">829</span>
<span id="L830" rel="#L830">830</span>
<span id="L831" rel="#L831">831</span>
<span id="L832" rel="#L832">832</span>
<span id="L833" rel="#L833">833</span>
<span id="L834" rel="#L834">834</span>
<span id="L835" rel="#L835">835</span>
<span id="L836" rel="#L836">836</span>
<span id="L837" rel="#L837">837</span>
<span id="L838" rel="#L838">838</span>
<span id="L839" rel="#L839">839</span>
<span id="L840" rel="#L840">840</span>
<span id="L841" rel="#L841">841</span>
<span id="L842" rel="#L842">842</span>
<span id="L843" rel="#L843">843</span>
<span id="L844" rel="#L844">844</span>
<span id="L845" rel="#L845">845</span>
<span id="L846" rel="#L846">846</span>
<span id="L847" rel="#L847">847</span>
<span id="L848" rel="#L848">848</span>
<span id="L849" rel="#L849">849</span>
<span id="L850" rel="#L850">850</span>
<span id="L851" rel="#L851">851</span>
<span id="L852" rel="#L852">852</span>
<span id="L853" rel="#L853">853</span>
<span id="L854" rel="#L854">854</span>
<span id="L855" rel="#L855">855</span>
<span id="L856" rel="#L856">856</span>
<span id="L857" rel="#L857">857</span>
<span id="L858" rel="#L858">858</span>
<span id="L859" rel="#L859">859</span>
<span id="L860" rel="#L860">860</span>
<span id="L861" rel="#L861">861</span>
<span id="L862" rel="#L862">862</span>
<span id="L863" rel="#L863">863</span>
<span id="L864" rel="#L864">864</span>
<span id="L865" rel="#L865">865</span>
<span id="L866" rel="#L866">866</span>
<span id="L867" rel="#L867">867</span>
<span id="L868" rel="#L868">868</span>
<span id="L869" rel="#L869">869</span>
<span id="L870" rel="#L870">870</span>
<span id="L871" rel="#L871">871</span>
<span id="L872" rel="#L872">872</span>
<span id="L873" rel="#L873">873</span>
<span id="L874" rel="#L874">874</span>
<span id="L875" rel="#L875">875</span>
<span id="L876" rel="#L876">876</span>
<span id="L877" rel="#L877">877</span>
<span id="L878" rel="#L878">878</span>
<span id="L879" rel="#L879">879</span>
<span id="L880" rel="#L880">880</span>
<span id="L881" rel="#L881">881</span>
<span id="L882" rel="#L882">882</span>
<span id="L883" rel="#L883">883</span>
<span id="L884" rel="#L884">884</span>
<span id="L885" rel="#L885">885</span>
<span id="L886" rel="#L886">886</span>
<span id="L887" rel="#L887">887</span>
<span id="L888" rel="#L888">888</span>
<span id="L889" rel="#L889">889</span>
<span id="L890" rel="#L890">890</span>
<span id="L891" rel="#L891">891</span>
<span id="L892" rel="#L892">892</span>
<span id="L893" rel="#L893">893</span>
<span id="L894" rel="#L894">894</span>
<span id="L895" rel="#L895">895</span>
<span id="L896" rel="#L896">896</span>
<span id="L897" rel="#L897">897</span>
<span id="L898" rel="#L898">898</span>
<span id="L899" rel="#L899">899</span>
<span id="L900" rel="#L900">900</span>
<span id="L901" rel="#L901">901</span>
<span id="L902" rel="#L902">902</span>
<span id="L903" rel="#L903">903</span>
<span id="L904" rel="#L904">904</span>
<span id="L905" rel="#L905">905</span>
<span id="L906" rel="#L906">906</span>
<span id="L907" rel="#L907">907</span>
<span id="L908" rel="#L908">908</span>
<span id="L909" rel="#L909">909</span>
<span id="L910" rel="#L910">910</span>
<span id="L911" rel="#L911">911</span>
<span id="L912" rel="#L912">912</span>
<span id="L913" rel="#L913">913</span>
<span id="L914" rel="#L914">914</span>
<span id="L915" rel="#L915">915</span>
<span id="L916" rel="#L916">916</span>
<span id="L917" rel="#L917">917</span>
<span id="L918" rel="#L918">918</span>
<span id="L919" rel="#L919">919</span>
<span id="L920" rel="#L920">920</span>
<span id="L921" rel="#L921">921</span>
<span id="L922" rel="#L922">922</span>
<span id="L923" rel="#L923">923</span>
<span id="L924" rel="#L924">924</span>
<span id="L925" rel="#L925">925</span>
<span id="L926" rel="#L926">926</span>
<span id="L927" rel="#L927">927</span>
<span id="L928" rel="#L928">928</span>
<span id="L929" rel="#L929">929</span>
<span id="L930" rel="#L930">930</span>
<span id="L931" rel="#L931">931</span>
<span id="L932" rel="#L932">932</span>
<span id="L933" rel="#L933">933</span>
<span id="L934" rel="#L934">934</span>
<span id="L935" rel="#L935">935</span>
<span id="L936" rel="#L936">936</span>
<span id="L937" rel="#L937">937</span>
<span id="L938" rel="#L938">938</span>
<span id="L939" rel="#L939">939</span>
<span id="L940" rel="#L940">940</span>
<span id="L941" rel="#L941">941</span>
<span id="L942" rel="#L942">942</span>
<span id="L943" rel="#L943">943</span>
<span id="L944" rel="#L944">944</span>
<span id="L945" rel="#L945">945</span>
<span id="L946" rel="#L946">946</span>
<span id="L947" rel="#L947">947</span>
<span id="L948" rel="#L948">948</span>
<span id="L949" rel="#L949">949</span>
<span id="L950" rel="#L950">950</span>
<span id="L951" rel="#L951">951</span>
<span id="L952" rel="#L952">952</span>
<span id="L953" rel="#L953">953</span>
<span id="L954" rel="#L954">954</span>
<span id="L955" rel="#L955">955</span>
<span id="L956" rel="#L956">956</span>
<span id="L957" rel="#L957">957</span>
<span id="L958" rel="#L958">958</span>
<span id="L959" rel="#L959">959</span>
<span id="L960" rel="#L960">960</span>
<span id="L961" rel="#L961">961</span>
<span id="L962" rel="#L962">962</span>
<span id="L963" rel="#L963">963</span>
<span id="L964" rel="#L964">964</span>
<span id="L965" rel="#L965">965</span>
<span id="L966" rel="#L966">966</span>
<span id="L967" rel="#L967">967</span>
<span id="L968" rel="#L968">968</span>
<span id="L969" rel="#L969">969</span>
<span id="L970" rel="#L970">970</span>
<span id="L971" rel="#L971">971</span>
<span id="L972" rel="#L972">972</span>
<span id="L973" rel="#L973">973</span>
<span id="L974" rel="#L974">974</span>
<span id="L975" rel="#L975">975</span>
<span id="L976" rel="#L976">976</span>
<span id="L977" rel="#L977">977</span>
<span id="L978" rel="#L978">978</span>
<span id="L979" rel="#L979">979</span>
<span id="L980" rel="#L980">980</span>
<span id="L981" rel="#L981">981</span>
<span id="L982" rel="#L982">982</span>
<span id="L983" rel="#L983">983</span>
<span id="L984" rel="#L984">984</span>
<span id="L985" rel="#L985">985</span>
<span id="L986" rel="#L986">986</span>
<span id="L987" rel="#L987">987</span>
<span id="L988" rel="#L988">988</span>
<span id="L989" rel="#L989">989</span>
<span id="L990" rel="#L990">990</span>
<span id="L991" rel="#L991">991</span>
<span id="L992" rel="#L992">992</span>
<span id="L993" rel="#L993">993</span>
<span id="L994" rel="#L994">994</span>
<span id="L995" rel="#L995">995</span>
<span id="L996" rel="#L996">996</span>
<span id="L997" rel="#L997">997</span>
<span id="L998" rel="#L998">998</span>
<span id="L999" rel="#L999">999</span>
<span id="L1000" rel="#L1000">1000</span>
<span id="L1001" rel="#L1001">1001</span>
<span id="L1002" rel="#L1002">1002</span>
<span id="L1003" rel="#L1003">1003</span>
<span id="L1004" rel="#L1004">1004</span>
<span id="L1005" rel="#L1005">1005</span>
<span id="L1006" rel="#L1006">1006</span>
<span id="L1007" rel="#L1007">1007</span>
<span id="L1008" rel="#L1008">1008</span>
<span id="L1009" rel="#L1009">1009</span>
<span id="L1010" rel="#L1010">1010</span>
<span id="L1011" rel="#L1011">1011</span>
<span id="L1012" rel="#L1012">1012</span>
<span id="L1013" rel="#L1013">1013</span>
<span id="L1014" rel="#L1014">1014</span>
<span id="L1015" rel="#L1015">1015</span>
<span id="L1016" rel="#L1016">1016</span>
<span id="L1017" rel="#L1017">1017</span>
<span id="L1018" rel="#L1018">1018</span>
<span id="L1019" rel="#L1019">1019</span>
<span id="L1020" rel="#L1020">1020</span>
<span id="L1021" rel="#L1021">1021</span>
<span id="L1022" rel="#L1022">1022</span>
<span id="L1023" rel="#L1023">1023</span>
<span id="L1024" rel="#L1024">1024</span>
<span id="L1025" rel="#L1025">1025</span>
<span id="L1026" rel="#L1026">1026</span>
<span id="L1027" rel="#L1027">1027</span>
<span id="L1028" rel="#L1028">1028</span>
<span id="L1029" rel="#L1029">1029</span>
<span id="L1030" rel="#L1030">1030</span>
<span id="L1031" rel="#L1031">1031</span>
<span id="L1032" rel="#L1032">1032</span>
<span id="L1033" rel="#L1033">1033</span>
<span id="L1034" rel="#L1034">1034</span>
<span id="L1035" rel="#L1035">1035</span>
<span id="L1036" rel="#L1036">1036</span>
<span id="L1037" rel="#L1037">1037</span>
<span id="L1038" rel="#L1038">1038</span>
<span id="L1039" rel="#L1039">1039</span>
<span id="L1040" rel="#L1040">1040</span>
<span id="L1041" rel="#L1041">1041</span>
<span id="L1042" rel="#L1042">1042</span>
<span id="L1043" rel="#L1043">1043</span>
<span id="L1044" rel="#L1044">1044</span>
<span id="L1045" rel="#L1045">1045</span>
<span id="L1046" rel="#L1046">1046</span>
<span id="L1047" rel="#L1047">1047</span>
<span id="L1048" rel="#L1048">1048</span>
<span id="L1049" rel="#L1049">1049</span>
<span id="L1050" rel="#L1050">1050</span>
<span id="L1051" rel="#L1051">1051</span>
<span id="L1052" rel="#L1052">1052</span>
<span id="L1053" rel="#L1053">1053</span>
<span id="L1054" rel="#L1054">1054</span>
<span id="L1055" rel="#L1055">1055</span>
<span id="L1056" rel="#L1056">1056</span>
<span id="L1057" rel="#L1057">1057</span>
<span id="L1058" rel="#L1058">1058</span>
<span id="L1059" rel="#L1059">1059</span>
<span id="L1060" rel="#L1060">1060</span>
<span id="L1061" rel="#L1061">1061</span>
<span id="L1062" rel="#L1062">1062</span>
<span id="L1063" rel="#L1063">1063</span>
<span id="L1064" rel="#L1064">1064</span>
<span id="L1065" rel="#L1065">1065</span>
<span id="L1066" rel="#L1066">1066</span>
<span id="L1067" rel="#L1067">1067</span>
<span id="L1068" rel="#L1068">1068</span>
<span id="L1069" rel="#L1069">1069</span>
<span id="L1070" rel="#L1070">1070</span>
<span id="L1071" rel="#L1071">1071</span>
<span id="L1072" rel="#L1072">1072</span>
<span id="L1073" rel="#L1073">1073</span>
<span id="L1074" rel="#L1074">1074</span>
<span id="L1075" rel="#L1075">1075</span>
<span id="L1076" rel="#L1076">1076</span>
<span id="L1077" rel="#L1077">1077</span>
<span id="L1078" rel="#L1078">1078</span>
<span id="L1079" rel="#L1079">1079</span>
<span id="L1080" rel="#L1080">1080</span>
<span id="L1081" rel="#L1081">1081</span>
<span id="L1082" rel="#L1082">1082</span>
<span id="L1083" rel="#L1083">1083</span>
<span id="L1084" rel="#L1084">1084</span>
<span id="L1085" rel="#L1085">1085</span>
<span id="L1086" rel="#L1086">1086</span>
<span id="L1087" rel="#L1087">1087</span>
<span id="L1088" rel="#L1088">1088</span>
<span id="L1089" rel="#L1089">1089</span>
<span id="L1090" rel="#L1090">1090</span>
<span id="L1091" rel="#L1091">1091</span>
<span id="L1092" rel="#L1092">1092</span>
<span id="L1093" rel="#L1093">1093</span>
<span id="L1094" rel="#L1094">1094</span>
<span id="L1095" rel="#L1095">1095</span>
<span id="L1096" rel="#L1096">1096</span>
<span id="L1097" rel="#L1097">1097</span>
<span id="L1098" rel="#L1098">1098</span>
<span id="L1099" rel="#L1099">1099</span>
<span id="L1100" rel="#L1100">1100</span>
<span id="L1101" rel="#L1101">1101</span>
<span id="L1102" rel="#L1102">1102</span>
<span id="L1103" rel="#L1103">1103</span>
</pre>
          </td>
          <td width="100%">
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Driver for Broadcom BCM2708 GPIO unit (pinctl + GPIO)</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright (C) 2012 Chris Boot, Simon Arlott</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * This driver is inspired by:</span></div><div class='line' id='LC7'><span class="cm"> * pinctrl-nomadik.c, please see original file for copyright information</span></div><div class='line' id='LC8'><span class="cm"> * pinctrl-tegra.c, please see original file for copyright information</span></div><div class='line' id='LC9'><span class="cm"> *</span></div><div class='line' id='LC10'><span class="cm"> * This program is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC11'><span class="cm"> * it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC12'><span class="cm"> * the Free Software Foundation; either version 2 of the License, or</span></div><div class='line' id='LC13'><span class="cm"> * (at your option) any later version.</span></div><div class='line' id='LC14'><span class="cm"> *</span></div><div class='line' id='LC15'><span class="cm"> * This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC16'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC17'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC18'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC19'><span class="cm"> *</span></div><div class='line' id='LC20'><span class="cm"> * You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC21'><span class="cm"> * along with this program; if not, write to the Free Software</span></div><div class='line' id='LC22'><span class="cm"> * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.</span></div><div class='line' id='LC23'><span class="cm"> */</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/bitmap.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;linux/bug.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;linux/device.h&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/err.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;linux/gpio.h&gt;</span></div><div class='line' id='LC30'><span class="cp">#include &lt;linux/interrupt.h&gt;</span></div><div class='line' id='LC31'><span class="cp">#include &lt;linux/irq.h&gt;</span></div><div class='line' id='LC32'><span class="cp">#include &lt;linux/irqdesc.h&gt;</span></div><div class='line' id='LC33'><span class="cp">#include &lt;linux/irqdomain.h&gt;</span></div><div class='line' id='LC34'><span class="cp">#include &lt;linux/io.h&gt;</span></div><div class='line' id='LC35'><span class="cp">#include &lt;linux/module.h&gt;</span></div><div class='line' id='LC36'><span class="cp">#include &lt;linux/of.h&gt;</span></div><div class='line' id='LC37'><span class="cp">#include &lt;linux/of_address.h&gt;</span></div><div class='line' id='LC38'><span class="cp">#include &lt;linux/of_irq.h&gt;</span></div><div class='line' id='LC39'><span class="cp">#include &lt;linux/pinctrl/pinctrl.h&gt;</span></div><div class='line' id='LC40'><span class="cp">#include &lt;linux/pinctrl/pinmux.h&gt;</span></div><div class='line' id='LC41'><span class="cp">#include &lt;linux/pinctrl/pinconf.h&gt;</span></div><div class='line' id='LC42'><span class="cp">#include &lt;linux/pinctrl/machine.h&gt;</span></div><div class='line' id='LC43'><span class="cp">#include &lt;linux/pinctrl/consumer.h&gt;</span></div><div class='line' id='LC44'><span class="cp">#include &lt;linux/platform_device.h&gt;</span></div><div class='line' id='LC45'><span class="cp">#include &lt;linux/seq_file.h&gt;</span></div><div class='line' id='LC46'><span class="cp">#include &lt;linux/spinlock.h&gt;</span></div><div class='line' id='LC47'><span class="cp">#include &lt;linux/slab.h&gt;</span></div><div class='line' id='LC48'><span class="cp">#include &lt;linux/types.h&gt;</span></div><div class='line' id='LC49'><span class="cp">#include &quot;core.h&quot;</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="cp">#define MODULE_NAME &quot;pinctrl-bcm2708&quot;</span></div><div class='line' id='LC52'><span class="cp">#define BCM2708_NUM_GPIOS 54</span></div><div class='line' id='LC53'><span class="cp">#define BCM2708_NUM_BANKS 2</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cp">#define BCM2708_PIN_BITMAP_SZ \</span></div><div class='line' id='LC56'><span class="cp">	DIV_ROUND_UP(BCM2708_NUM_GPIOS, sizeof(unsigned long) * 8)</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><span class="cm">/* GPIO register offsets */</span></div><div class='line' id='LC59'><span class="cp">#define GPFSEL0		0x0	</span><span class="cm">/* Function Select */</span><span class="cp"></span></div><div class='line' id='LC60'><span class="cp">#define GPSET0		0x1c	</span><span class="cm">/* Pin Output Set */</span><span class="cp"></span></div><div class='line' id='LC61'><span class="cp">#define GPCLR0		0x28	</span><span class="cm">/* Pin Output Clear */</span><span class="cp"></span></div><div class='line' id='LC62'><span class="cp">#define GPLEV0		0x34	</span><span class="cm">/* Pin Level */</span><span class="cp"></span></div><div class='line' id='LC63'><span class="cp">#define GPEDS0		0x40	</span><span class="cm">/* Pin Event Detect Status */</span><span class="cp"></span></div><div class='line' id='LC64'><span class="cp">#define GPREN0		0x4c	</span><span class="cm">/* Pin Rising Edge Detect Enable */</span><span class="cp"></span></div><div class='line' id='LC65'><span class="cp">#define GPFEN0		0x58	</span><span class="cm">/* Pin Falling Edge Detect Enable */</span><span class="cp"></span></div><div class='line' id='LC66'><span class="cp">#define GPHEN0		0x64	</span><span class="cm">/* Pin High Detect Enable */</span><span class="cp"></span></div><div class='line' id='LC67'><span class="cp">#define GPLEN0		0x70	</span><span class="cm">/* Pin Low Detect Enable */</span><span class="cp"></span></div><div class='line' id='LC68'><span class="cp">#define GPAREN0		0x7c	</span><span class="cm">/* Pin Async Rising Edge Detect */</span><span class="cp"></span></div><div class='line' id='LC69'><span class="cp">#define GPAFEN0		0x88	</span><span class="cm">/* Pin Async Falling Edge Detect */</span><span class="cp"></span></div><div class='line' id='LC70'><span class="cp">#define GPPUD		0x94	</span><span class="cm">/* Pin Pull-up/down Enable */</span><span class="cp"></span></div><div class='line' id='LC71'><span class="cp">#define GPPUDCLK0	0x98	</span><span class="cm">/* Pin Pull-up/down Enable Clock */</span><span class="cp"></span></div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'><span class="k">struct</span> <span class="n">bcm2708_gpio_irqdata</span> <span class="p">{</span></div><div class='line' id='LC74'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">;</span></div><div class='line' id='LC75'>	<span class="kt">int</span> <span class="n">bank</span><span class="p">;</span></div><div class='line' id='LC76'><span class="p">};</span></div><div class='line' id='LC77'><br/></div><div class='line' id='LC78'><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="p">{</span></div><div class='line' id='LC79'>	<span class="k">struct</span> <span class="n">device</span> <span class="o">*</span><span class="n">dev</span><span class="p">;</span></div><div class='line' id='LC80'>	<span class="kt">void</span> <span class="n">__iomem</span> <span class="o">*</span><span class="n">base</span><span class="p">;</span></div><div class='line' id='LC81'>	<span class="kt">int</span> <span class="n">irq</span><span class="p">[</span><span class="n">BCM2708_NUM_BANKS</span><span class="p">];</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">readonly_map</span><span class="p">[</span><span class="n">BCM2708_PIN_BITMAP_SZ</span><span class="p">];</span></div><div class='line' id='LC84'>	<span class="cm">/* note: locking assumes each bank will have its own unsigned long */</span></div><div class='line' id='LC85'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">enabled_irq_map</span><span class="p">[</span><span class="n">BCM2708_PIN_BITMAP_SZ</span><span class="p">];</span></div><div class='line' id='LC86'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">irq_type</span><span class="p">[</span><span class="n">BCM2708_NUM_GPIOS</span><span class="p">];</span></div><div class='line' id='LC87'><br/></div><div class='line' id='LC88'>	<span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctl_dev</span><span class="p">;</span></div><div class='line' id='LC89'>	<span class="k">struct</span> <span class="n">irq_domain</span> <span class="o">*</span><span class="n">irq_domain</span><span class="p">;</span></div><div class='line' id='LC90'>	<span class="k">struct</span> <span class="n">gpio_chip</span> <span class="n">gpio_chip</span><span class="p">;</span></div><div class='line' id='LC91'>	<span class="k">struct</span> <span class="n">pinctrl_gpio_range</span> <span class="n">gpio_range</span><span class="p">;</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'>	<span class="k">struct</span> <span class="n">bcm2708_gpio_irqdata</span> <span class="n">irq_data</span><span class="p">[</span><span class="n">BCM2708_NUM_BANKS</span><span class="p">];</span></div><div class='line' id='LC94'>	<span class="n">spinlock_t</span> <span class="n">irq_lock</span><span class="p">[</span><span class="n">BCM2708_NUM_BANKS</span><span class="p">];</span></div><div class='line' id='LC95'><span class="p">};</span></div><div class='line' id='LC96'><br/></div><div class='line' id='LC97'><span class="k">static</span> <span class="k">struct</span> <span class="n">lock_class_key</span> <span class="n">gpio_lock_class</span><span class="p">;</span></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'><span class="cm">/* pins are just named GPIO0..GPIO53 */</span></div><div class='line' id='LC100'><span class="cp">#define BCM2708_GPIO_PIN(a) PINCTRL_PIN(a, &quot;GPIO&quot; #a)</span></div><div class='line' id='LC101'><span class="k">struct</span> <span class="n">pinctrl_pin_desc</span> <span class="n">bcm2708_gpio_pins</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC102'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">0</span><span class="p">),</span></div><div class='line' id='LC103'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">1</span><span class="p">),</span></div><div class='line' id='LC104'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">2</span><span class="p">),</span></div><div class='line' id='LC105'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">3</span><span class="p">),</span></div><div class='line' id='LC106'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">4</span><span class="p">),</span></div><div class='line' id='LC107'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">5</span><span class="p">),</span></div><div class='line' id='LC108'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">6</span><span class="p">),</span></div><div class='line' id='LC109'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">7</span><span class="p">),</span></div><div class='line' id='LC110'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">8</span><span class="p">),</span></div><div class='line' id='LC111'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">9</span><span class="p">),</span></div><div class='line' id='LC112'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">10</span><span class="p">),</span></div><div class='line' id='LC113'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">11</span><span class="p">),</span></div><div class='line' id='LC114'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">12</span><span class="p">),</span></div><div class='line' id='LC115'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">13</span><span class="p">),</span></div><div class='line' id='LC116'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">14</span><span class="p">),</span></div><div class='line' id='LC117'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">15</span><span class="p">),</span></div><div class='line' id='LC118'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">16</span><span class="p">),</span></div><div class='line' id='LC119'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">17</span><span class="p">),</span></div><div class='line' id='LC120'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">18</span><span class="p">),</span></div><div class='line' id='LC121'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">19</span><span class="p">),</span></div><div class='line' id='LC122'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">20</span><span class="p">),</span></div><div class='line' id='LC123'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">21</span><span class="p">),</span></div><div class='line' id='LC124'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">22</span><span class="p">),</span></div><div class='line' id='LC125'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">23</span><span class="p">),</span></div><div class='line' id='LC126'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">24</span><span class="p">),</span></div><div class='line' id='LC127'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">25</span><span class="p">),</span></div><div class='line' id='LC128'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">26</span><span class="p">),</span></div><div class='line' id='LC129'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">27</span><span class="p">),</span></div><div class='line' id='LC130'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">28</span><span class="p">),</span></div><div class='line' id='LC131'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">29</span><span class="p">),</span></div><div class='line' id='LC132'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">30</span><span class="p">),</span></div><div class='line' id='LC133'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">31</span><span class="p">),</span></div><div class='line' id='LC134'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">32</span><span class="p">),</span></div><div class='line' id='LC135'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">33</span><span class="p">),</span></div><div class='line' id='LC136'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">34</span><span class="p">),</span></div><div class='line' id='LC137'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">35</span><span class="p">),</span></div><div class='line' id='LC138'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">36</span><span class="p">),</span></div><div class='line' id='LC139'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">37</span><span class="p">),</span></div><div class='line' id='LC140'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">38</span><span class="p">),</span></div><div class='line' id='LC141'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">39</span><span class="p">),</span></div><div class='line' id='LC142'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">40</span><span class="p">),</span></div><div class='line' id='LC143'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">41</span><span class="p">),</span></div><div class='line' id='LC144'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">42</span><span class="p">),</span></div><div class='line' id='LC145'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">43</span><span class="p">),</span></div><div class='line' id='LC146'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">44</span><span class="p">),</span></div><div class='line' id='LC147'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">45</span><span class="p">),</span></div><div class='line' id='LC148'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">46</span><span class="p">),</span></div><div class='line' id='LC149'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">47</span><span class="p">),</span></div><div class='line' id='LC150'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">48</span><span class="p">),</span></div><div class='line' id='LC151'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">49</span><span class="p">),</span></div><div class='line' id='LC152'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">50</span><span class="p">),</span></div><div class='line' id='LC153'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">51</span><span class="p">),</span></div><div class='line' id='LC154'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">52</span><span class="p">),</span></div><div class='line' id='LC155'>	<span class="n">BCM2708_GPIO_PIN</span><span class="p">(</span><span class="mi">53</span><span class="p">),</span></div><div class='line' id='LC156'><span class="p">};</span></div><div class='line' id='LC157'><br/></div><div class='line' id='LC158'><span class="cm">/* one pin per group */</span></div><div class='line' id='LC159'><span class="k">static</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">bcm2708_gpio_groups</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC160'>	<span class="s">&quot;GPIO0&quot;</span><span class="p">,</span></div><div class='line' id='LC161'>	<span class="s">&quot;GPIO1&quot;</span><span class="p">,</span></div><div class='line' id='LC162'>	<span class="s">&quot;GPIO2&quot;</span><span class="p">,</span></div><div class='line' id='LC163'>	<span class="s">&quot;GPIO3&quot;</span><span class="p">,</span></div><div class='line' id='LC164'>	<span class="s">&quot;GPIO4&quot;</span><span class="p">,</span></div><div class='line' id='LC165'>	<span class="s">&quot;GPIO5&quot;</span><span class="p">,</span></div><div class='line' id='LC166'>	<span class="s">&quot;GPIO6&quot;</span><span class="p">,</span></div><div class='line' id='LC167'>	<span class="s">&quot;GPIO7&quot;</span><span class="p">,</span></div><div class='line' id='LC168'>	<span class="s">&quot;GPIO8&quot;</span><span class="p">,</span></div><div class='line' id='LC169'>	<span class="s">&quot;GPIO9&quot;</span><span class="p">,</span></div><div class='line' id='LC170'>	<span class="s">&quot;GPIO10&quot;</span><span class="p">,</span></div><div class='line' id='LC171'>	<span class="s">&quot;GPIO11&quot;</span><span class="p">,</span></div><div class='line' id='LC172'>	<span class="s">&quot;GPIO12&quot;</span><span class="p">,</span></div><div class='line' id='LC173'>	<span class="s">&quot;GPIO13&quot;</span><span class="p">,</span></div><div class='line' id='LC174'>	<span class="s">&quot;GPIO14&quot;</span><span class="p">,</span></div><div class='line' id='LC175'>	<span class="s">&quot;GPIO15&quot;</span><span class="p">,</span></div><div class='line' id='LC176'>	<span class="s">&quot;GPIO16&quot;</span><span class="p">,</span></div><div class='line' id='LC177'>	<span class="s">&quot;GPIO17&quot;</span><span class="p">,</span></div><div class='line' id='LC178'>	<span class="s">&quot;GPIO18&quot;</span><span class="p">,</span></div><div class='line' id='LC179'>	<span class="s">&quot;GPIO19&quot;</span><span class="p">,</span></div><div class='line' id='LC180'>	<span class="s">&quot;GPIO20&quot;</span><span class="p">,</span></div><div class='line' id='LC181'>	<span class="s">&quot;GPIO21&quot;</span><span class="p">,</span></div><div class='line' id='LC182'>	<span class="s">&quot;GPIO22&quot;</span><span class="p">,</span></div><div class='line' id='LC183'>	<span class="s">&quot;GPIO23&quot;</span><span class="p">,</span></div><div class='line' id='LC184'>	<span class="s">&quot;GPIO24&quot;</span><span class="p">,</span></div><div class='line' id='LC185'>	<span class="s">&quot;GPIO25&quot;</span><span class="p">,</span></div><div class='line' id='LC186'>	<span class="s">&quot;GPIO26&quot;</span><span class="p">,</span></div><div class='line' id='LC187'>	<span class="s">&quot;GPIO27&quot;</span><span class="p">,</span></div><div class='line' id='LC188'>	<span class="s">&quot;GPIO28&quot;</span><span class="p">,</span></div><div class='line' id='LC189'>	<span class="s">&quot;GPIO29&quot;</span><span class="p">,</span></div><div class='line' id='LC190'>	<span class="s">&quot;GPIO30&quot;</span><span class="p">,</span></div><div class='line' id='LC191'>	<span class="s">&quot;GPIO31&quot;</span><span class="p">,</span></div><div class='line' id='LC192'>	<span class="s">&quot;GPIO32&quot;</span><span class="p">,</span></div><div class='line' id='LC193'>	<span class="s">&quot;GPIO33&quot;</span><span class="p">,</span></div><div class='line' id='LC194'>	<span class="s">&quot;GPIO34&quot;</span><span class="p">,</span></div><div class='line' id='LC195'>	<span class="s">&quot;GPIO35&quot;</span><span class="p">,</span></div><div class='line' id='LC196'>	<span class="s">&quot;GPIO36&quot;</span><span class="p">,</span></div><div class='line' id='LC197'>	<span class="s">&quot;GPIO37&quot;</span><span class="p">,</span></div><div class='line' id='LC198'>	<span class="s">&quot;GPIO38&quot;</span><span class="p">,</span></div><div class='line' id='LC199'>	<span class="s">&quot;GPIO39&quot;</span><span class="p">,</span></div><div class='line' id='LC200'>	<span class="s">&quot;GPIO40&quot;</span><span class="p">,</span></div><div class='line' id='LC201'>	<span class="s">&quot;GPIO41&quot;</span><span class="p">,</span></div><div class='line' id='LC202'>	<span class="s">&quot;GPIO42&quot;</span><span class="p">,</span></div><div class='line' id='LC203'>	<span class="s">&quot;GPIO43&quot;</span><span class="p">,</span></div><div class='line' id='LC204'>	<span class="s">&quot;GPIO44&quot;</span><span class="p">,</span></div><div class='line' id='LC205'>	<span class="s">&quot;GPIO45&quot;</span><span class="p">,</span></div><div class='line' id='LC206'>	<span class="s">&quot;GPIO46&quot;</span><span class="p">,</span></div><div class='line' id='LC207'>	<span class="s">&quot;GPIO47&quot;</span><span class="p">,</span></div><div class='line' id='LC208'>	<span class="s">&quot;GPIO48&quot;</span><span class="p">,</span></div><div class='line' id='LC209'>	<span class="s">&quot;GPIO49&quot;</span><span class="p">,</span></div><div class='line' id='LC210'>	<span class="s">&quot;GPIO50&quot;</span><span class="p">,</span></div><div class='line' id='LC211'>	<span class="s">&quot;GPIO51&quot;</span><span class="p">,</span></div><div class='line' id='LC212'>	<span class="s">&quot;GPIO52&quot;</span><span class="p">,</span></div><div class='line' id='LC213'>	<span class="s">&quot;GPIO53&quot;</span><span class="p">,</span></div><div class='line' id='LC214'><span class="p">};</span></div><div class='line' id='LC215'><br/></div><div class='line' id='LC216'><span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="p">{</span></div><div class='line' id='LC217'>	<span class="n">BCM2708_FSEL_GPIO_IN</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC218'>	<span class="n">BCM2708_FSEL_GPIO_OUT</span> <span class="o">=</span> <span class="mi">1</span><span class="p">,</span></div><div class='line' id='LC219'>	<span class="n">BCM2708_FSEL_ALT0</span> <span class="o">=</span> <span class="mi">4</span><span class="p">,</span></div><div class='line' id='LC220'>	<span class="n">BCM2708_FSEL_ALT1</span> <span class="o">=</span> <span class="mi">5</span><span class="p">,</span></div><div class='line' id='LC221'>	<span class="n">BCM2708_FSEL_ALT2</span> <span class="o">=</span> <span class="mi">6</span><span class="p">,</span></div><div class='line' id='LC222'>	<span class="n">BCM2708_FSEL_ALT3</span> <span class="o">=</span> <span class="mi">7</span><span class="p">,</span></div><div class='line' id='LC223'>	<span class="n">BCM2708_FSEL_ALT4</span> <span class="o">=</span> <span class="mi">3</span><span class="p">,</span></div><div class='line' id='LC224'>	<span class="n">BCM2708_FSEL_ALT5</span> <span class="o">=</span> <span class="mi">2</span><span class="p">,</span></div><div class='line' id='LC225'>	<span class="n">BCM2708_FSEL_COUNT</span> <span class="o">=</span> <span class="mi">8</span><span class="p">,</span></div><div class='line' id='LC226'>	<span class="n">BCM2708_FSEL_MASK</span> <span class="o">=</span> <span class="mh">0x7</span><span class="p">,</span></div><div class='line' id='LC227'><span class="p">};</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="k">static</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">BCM2708_FSEL_COUNT</span><span class="p">]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC230'>	<span class="p">[</span><span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;GPIO_IN&quot;</span><span class="p">,</span></div><div class='line' id='LC231'>	<span class="p">[</span><span class="n">BCM2708_FSEL_GPIO_OUT</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;GPIO_OUT&quot;</span><span class="p">,</span></div><div class='line' id='LC232'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT0</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT0&quot;</span><span class="p">,</span></div><div class='line' id='LC233'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT1</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT1&quot;</span><span class="p">,</span></div><div class='line' id='LC234'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT2</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT2&quot;</span><span class="p">,</span></div><div class='line' id='LC235'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT3</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT3&quot;</span><span class="p">,</span></div><div class='line' id='LC236'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT4</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT4&quot;</span><span class="p">,</span></div><div class='line' id='LC237'>	<span class="p">[</span><span class="n">BCM2708_FSEL_ALT5</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;ALT5&quot;</span><span class="p">,</span></div><div class='line' id='LC238'><span class="p">};</span></div><div class='line' id='LC239'><br/></div><div class='line' id='LC240'><span class="k">static</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">irq_type_names</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC241'>	<span class="p">[</span><span class="n">IRQ_TYPE_NONE</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;none&quot;</span><span class="p">,</span></div><div class='line' id='LC242'>	<span class="p">[</span><span class="n">IRQ_TYPE_EDGE_RISING</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;edge-rising&quot;</span><span class="p">,</span></div><div class='line' id='LC243'>	<span class="p">[</span><span class="n">IRQ_TYPE_EDGE_FALLING</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;edge-falling&quot;</span><span class="p">,</span></div><div class='line' id='LC244'>	<span class="p">[</span><span class="n">IRQ_TYPE_EDGE_BOTH</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;edge-both&quot;</span><span class="p">,</span></div><div class='line' id='LC245'>	<span class="p">[</span><span class="n">IRQ_TYPE_LEVEL_HIGH</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;level-high&quot;</span><span class="p">,</span></div><div class='line' id='LC246'>	<span class="p">[</span><span class="n">IRQ_TYPE_LEVEL_LOW</span><span class="p">]</span> <span class="o">=</span> <span class="s">&quot;level-low&quot;</span><span class="p">,</span></div><div class='line' id='LC247'><span class="p">};</span></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'><span class="cp">#define FSEL_REG(p)		(GPFSEL0 + (((p) / 10) * 4))</span></div><div class='line' id='LC250'><span class="cp">#define FSEL_SHIFT(p)		(((p) % 10) * 3)</span></div><div class='line' id='LC251'><span class="cp">#define GPIO_REG_OFFSET(p)	((p) / 32)</span></div><div class='line' id='LC252'><span class="cp">#define GPIO_REG_SHIFT(p)	((p) % 32)</span></div><div class='line' id='LC253'><br/></div><div class='line' id='LC254'><span class="k">static</span> <span class="kr">inline</span> <span class="n">u32</span> <span class="nf">bcm2708_gpio_rd</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">reg</span><span class="p">)</span></div><div class='line' id='LC255'><span class="p">{</span></div><div class='line' id='LC256'>	<span class="k">return</span> <span class="n">readl</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">reg</span><span class="p">);</span></div><div class='line' id='LC257'><span class="p">}</span></div><div class='line' id='LC258'><br/></div><div class='line' id='LC259'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_wr</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">reg</span><span class="p">,</span></div><div class='line' id='LC260'>		<span class="n">u32</span> <span class="n">val</span><span class="p">)</span></div><div class='line' id='LC261'><span class="p">{</span></div><div class='line' id='LC262'>	<span class="n">writel</span><span class="p">(</span><span class="n">val</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">reg</span><span class="p">);</span></div><div class='line' id='LC263'><span class="p">}</span></div><div class='line' id='LC264'><br/></div><div class='line' id='LC265'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_get_bit</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">reg</span><span class="p">,</span></div><div class='line' id='LC266'>		<span class="kt">unsigned</span> <span class="n">bit</span><span class="p">)</span></div><div class='line' id='LC267'><span class="p">{</span></div><div class='line' id='LC268'>	<span class="kt">void</span> <span class="n">__iomem</span> <span class="o">*</span><span class="n">addr</span> <span class="o">=</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">reg</span> <span class="o">+</span> <span class="p">(</span><span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">bit</span><span class="p">)</span> <span class="o">*</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC269'>	<span class="k">return</span> <span class="p">(</span><span class="n">readl</span><span class="p">(</span><span class="n">addr</span><span class="p">)</span> <span class="o">&gt;&gt;</span> <span class="n">GPIO_REG_SHIFT</span><span class="p">(</span><span class="n">bit</span><span class="p">))</span> <span class="o">&amp;</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC270'><span class="p">}</span></div><div class='line' id='LC271'><br/></div><div class='line' id='LC272'><span class="cm">/* note NOT a read/modify/write cycle */</span></div><div class='line' id='LC273'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_set_bit</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC274'>		<span class="kt">unsigned</span> <span class="n">reg</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">bit</span><span class="p">)</span></div><div class='line' id='LC275'><span class="p">{</span></div><div class='line' id='LC276'>	<span class="kt">void</span> <span class="n">__iomem</span> <span class="o">*</span><span class="n">addr</span> <span class="o">=</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">reg</span> <span class="o">+</span> <span class="p">(</span><span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">bit</span><span class="p">)</span> <span class="o">*</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC277'>	<span class="n">writel</span><span class="p">(</span><span class="n">BIT</span><span class="p">(</span><span class="n">GPIO_REG_SHIFT</span><span class="p">(</span><span class="n">bit</span><span class="p">)),</span> <span class="n">addr</span><span class="p">);</span></div><div class='line' id='LC278'><span class="p">}</span></div><div class='line' id='LC279'><br/></div><div class='line' id='LC280'><span class="k">static</span> <span class="kr">inline</span> <span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="nf">bcm2708_pinctrl_fsel_get</span><span class="p">(</span></div><div class='line' id='LC281'>		<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">pin</span><span class="p">)</span></div><div class='line' id='LC282'><span class="p">{</span></div><div class='line' id='LC283'>	<span class="n">u32</span> <span class="n">val</span> <span class="o">=</span> <span class="n">bcm2708_gpio_rd</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">FSEL_REG</span><span class="p">(</span><span class="n">pin</span><span class="p">));</span></div><div class='line' id='LC284'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">status</span> <span class="o">=</span> <span class="p">(</span><span class="n">val</span> <span class="o">&gt;&gt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">))</span> <span class="o">&amp;</span> <span class="n">BCM2708_FSEL_MASK</span><span class="p">;</span></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'>	<span class="n">dev_dbg</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;get %08x (%u =&gt; %s)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">val</span><span class="p">,</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC287'>			<span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">status</span><span class="p">]);</span></div><div class='line' id='LC288'><br/></div><div class='line' id='LC289'>	<span class="k">return</span> <span class="n">status</span><span class="p">;</span></div><div class='line' id='LC290'><span class="p">}</span></div><div class='line' id='LC291'><br/></div><div class='line' id='LC292'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">bcm2708_pinctrl_fsel_set</span><span class="p">(</span></div><div class='line' id='LC293'>		<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC294'>		<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">fsel</span><span class="p">)</span></div><div class='line' id='LC295'><span class="p">{</span></div><div class='line' id='LC296'>	<span class="n">u32</span> <span class="n">val</span> <span class="o">=</span> <span class="n">bcm2708_gpio_rd</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">FSEL_REG</span><span class="p">(</span><span class="n">pin</span><span class="p">));</span></div><div class='line' id='LC297'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">cur</span> <span class="o">=</span> <span class="p">(</span><span class="n">val</span> <span class="o">&gt;&gt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">))</span> <span class="o">&amp;</span> <span class="n">BCM2708_FSEL_MASK</span><span class="p">;</span></div><div class='line' id='LC298'><br/></div><div class='line' id='LC299'>	<span class="n">dev_dbg</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;read %08x (%u =&gt; %s)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">val</span><span class="p">,</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC300'>			<span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">cur</span><span class="p">]);</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'>	<span class="k">if</span> <span class="p">(</span><span class="n">cur</span> <span class="o">==</span> <span class="n">fsel</span><span class="p">)</span></div><div class='line' id='LC303'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'>	<span class="k">if</span> <span class="p">(</span><span class="n">cur</span> <span class="o">!=</span> <span class="n">BCM2708_FSEL_GPIO_IN</span> <span class="o">&amp;&amp;</span> <span class="n">fsel</span> <span class="o">!=</span> <span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC306'>		<span class="cm">/* always transition through GPIO_IN */</span></div><div class='line' id='LC307'>		<span class="n">val</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="n">BCM2708_FSEL_MASK</span> <span class="o">&lt;&lt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">));</span></div><div class='line' id='LC308'>		<span class="n">val</span> <span class="o">|=</span> <span class="n">BCM2708_FSEL_GPIO_IN</span> <span class="o">&lt;&lt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC309'><br/></div><div class='line' id='LC310'>		<span class="n">dev_dbg</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;trans %08x (%u &lt;= %s)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">val</span><span class="p">,</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC311'>				<span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">]);</span></div><div class='line' id='LC312'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">FSEL_REG</span><span class="p">(</span><span class="n">pin</span><span class="p">),</span> <span class="n">val</span><span class="p">);</span></div><div class='line' id='LC313'>	<span class="p">}</span></div><div class='line' id='LC314'><br/></div><div class='line' id='LC315'>	<span class="n">val</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="n">BCM2708_FSEL_MASK</span> <span class="o">&lt;&lt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">));</span></div><div class='line' id='LC316'>	<span class="n">val</span> <span class="o">|=</span> <span class="n">fsel</span> <span class="o">&lt;&lt;</span> <span class="n">FSEL_SHIFT</span><span class="p">(</span><span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC317'><br/></div><div class='line' id='LC318'>	<span class="n">dev_dbg</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;write %08x (%u &lt;= %s)</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">val</span><span class="p">,</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC319'>			<span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">fsel</span><span class="p">]);</span></div><div class='line' id='LC320'>	<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">FSEL_REG</span><span class="p">(</span><span class="n">pin</span><span class="p">),</span> <span class="n">val</span><span class="p">);</span></div><div class='line' id='LC321'><span class="p">}</span></div><div class='line' id='LC322'><br/></div><div class='line' id='LC323'><span class="k">static</span> <span class="kr">inline</span> <span class="n">bool</span> <span class="nf">bcm2708_check_readonly</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span> <span class="kt">int</span> <span class="n">pin</span><span class="p">,</span></div><div class='line' id='LC324'>		<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">fsel</span><span class="p">)</span></div><div class='line' id='LC325'><span class="p">{</span></div><div class='line' id='LC326'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">cur</span><span class="p">;</span></div><div class='line' id='LC327'><br/></div><div class='line' id='LC328'>	<span class="cm">/* we only care about pins marked read-only */</span></div><div class='line' id='LC329'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">test_bit</span><span class="p">(</span><span class="n">pin</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">readonly_map</span><span class="p">))</span></div><div class='line' id='LC330'>		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC331'><br/></div><div class='line' id='LC332'>	<span class="cm">/* don&#39;t care if the requested state is the same as now */</span></div><div class='line' id='LC333'>	<span class="n">cur</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_fsel_get</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC334'>	<span class="k">if</span> <span class="p">(</span><span class="n">fsel</span> <span class="o">==</span> <span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC335'>		<span class="k">return</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC336'><br/></div><div class='line' id='LC337'>	<span class="k">return</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC338'><span class="p">}</span></div><div class='line' id='LC339'><br/></div><div class='line' id='LC340'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_request</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC341'><span class="p">{</span></div><div class='line' id='LC342'>	<span class="k">return</span> <span class="n">pinctrl_request_gpio</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC343'><span class="p">}</span></div><div class='line' id='LC344'><br/></div><div class='line' id='LC345'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_free</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC346'><span class="p">{</span></div><div class='line' id='LC347'>	<span class="n">pinctrl_free_gpio</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC348'><span class="p">}</span></div><div class='line' id='LC349'><br/></div><div class='line' id='LC350'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_direction_input</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC351'><span class="p">{</span></div><div class='line' id='LC352'>	<span class="k">return</span> <span class="n">pinctrl_gpio_direction_input</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC353'><span class="p">}</span></div><div class='line' id='LC354'><br/></div><div class='line' id='LC355'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_get</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC356'><span class="p">{</span></div><div class='line' id='LC357'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">dev_get_drvdata</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">);</span></div><div class='line' id='LC358'><br/></div><div class='line' id='LC359'>	<span class="k">return</span> <span class="n">bcm2708_gpio_get_bit</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPLEV0</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC360'><span class="p">}</span></div><div class='line' id='LC361'><br/></div><div class='line' id='LC362'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_direction_output</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span></div><div class='line' id='LC363'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="kt">int</span> <span class="n">value</span><span class="p">)</span></div><div class='line' id='LC364'><span class="p">{</span></div><div class='line' id='LC365'>	<span class="k">return</span> <span class="n">pinctrl_gpio_direction_output</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC366'><span class="p">}</span></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_set</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="kt">int</span> <span class="n">value</span><span class="p">)</span></div><div class='line' id='LC369'><span class="p">{</span></div><div class='line' id='LC370'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">dev_get_drvdata</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">);</span></div><div class='line' id='LC371'><br/></div><div class='line' id='LC372'>	<span class="k">if</span> <span class="p">(</span><span class="n">test_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">readonly_map</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC373'>		<span class="n">dev_warn</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;refusing to change value of read-only pin %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC374'>			<span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC375'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC376'>	<span class="p">}</span></div><div class='line' id='LC377'><br/></div><div class='line' id='LC378'>	<span class="n">bcm2708_gpio_set_bit</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">value</span> <span class="o">?</span> <span class="n">GPSET0</span> <span class="o">:</span> <span class="n">GPCLR0</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC379'><span class="p">}</span></div><div class='line' id='LC380'><br/></div><div class='line' id='LC381'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_to_irq</span><span class="p">(</span><span class="k">struct</span> <span class="n">gpio_chip</span> <span class="o">*</span><span class="n">chip</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC382'><span class="p">{</span></div><div class='line' id='LC383'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">dev_get_drvdata</span><span class="p">(</span><span class="n">chip</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">);</span></div><div class='line' id='LC384'><br/></div><div class='line' id='LC385'>	<span class="k">return</span> <span class="n">irq_linear_revmap</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC386'><span class="p">}</span></div><div class='line' id='LC387'><br/></div><div class='line' id='LC388'><span class="k">static</span> <span class="k">struct</span> <span class="n">gpio_chip</span> <span class="n">bcm2708_gpio_chip</span> <span class="n">__devinitconst</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC389'>	<span class="p">.</span><span class="n">label</span> <span class="o">=</span> <span class="n">MODULE_NAME</span><span class="p">,</span></div><div class='line' id='LC390'>	<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC391'>	<span class="p">.</span><span class="n">request</span> <span class="o">=</span> <span class="n">bcm2708_gpio_request</span><span class="p">,</span></div><div class='line' id='LC392'>	<span class="p">.</span><span class="n">free</span> <span class="o">=</span> <span class="n">bcm2708_gpio_free</span><span class="p">,</span></div><div class='line' id='LC393'>	<span class="p">.</span><span class="n">direction_input</span> <span class="o">=</span> <span class="n">bcm2708_gpio_direction_input</span><span class="p">,</span></div><div class='line' id='LC394'>	<span class="p">.</span><span class="n">get</span> <span class="o">=</span> <span class="n">bcm2708_gpio_get</span><span class="p">,</span></div><div class='line' id='LC395'>	<span class="p">.</span><span class="n">direction_output</span> <span class="o">=</span> <span class="n">bcm2708_gpio_direction_output</span><span class="p">,</span></div><div class='line' id='LC396'>	<span class="p">.</span><span class="n">set</span> <span class="o">=</span> <span class="n">bcm2708_gpio_set</span><span class="p">,</span></div><div class='line' id='LC397'>	<span class="p">.</span><span class="n">to_irq</span> <span class="o">=</span> <span class="n">bcm2708_gpio_to_irq</span><span class="p">,</span></div><div class='line' id='LC398'>	<span class="p">.</span><span class="n">base</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC399'>	<span class="p">.</span><span class="n">ngpio</span> <span class="o">=</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">,</span></div><div class='line' id='LC400'>	<span class="p">.</span><span class="n">can_sleep</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC401'><span class="p">};</span></div><div class='line' id='LC402'><br/></div><div class='line' id='LC403'><span class="k">static</span> <span class="n">irqreturn_t</span> <span class="nf">bcm2708_gpio_irq_handler</span><span class="p">(</span><span class="kt">int</span> <span class="n">irq</span><span class="p">,</span> <span class="kt">void</span> <span class="o">*</span><span class="n">dev_id</span><span class="p">)</span></div><div class='line' id='LC404'><span class="p">{</span></div><div class='line' id='LC405'>	<span class="k">struct</span> <span class="n">bcm2708_gpio_irqdata</span> <span class="o">*</span><span class="n">irqdata</span> <span class="o">=</span> <span class="n">dev_id</span><span class="p">;</span></div><div class='line' id='LC406'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">irqdata</span><span class="o">-&gt;</span><span class="n">pc</span><span class="p">;</span></div><div class='line' id='LC407'>	<span class="kt">int</span> <span class="n">bank</span> <span class="o">=</span> <span class="n">irqdata</span><span class="o">-&gt;</span><span class="n">bank</span><span class="p">;</span></div><div class='line' id='LC408'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">events</span><span class="p">;</span></div><div class='line' id='LC409'>	<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC410'>	<span class="kt">unsigned</span> <span class="n">gpio</span><span class="p">;</span></div><div class='line' id='LC411'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC412'>	<span class="n">bool</span> <span class="n">enabled</span><span class="p">;</span></div><div class='line' id='LC413'><br/></div><div class='line' id='LC414'>	<span class="n">events</span> <span class="o">=</span> <span class="n">bcm2708_gpio_rd</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPEDS0</span> <span class="o">+</span> <span class="n">bank</span> <span class="o">*</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC415'>	<span class="n">for_each_set_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">events</span><span class="p">,</span> <span class="mi">32</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC416'>		<span class="n">gpio</span> <span class="o">=</span> <span class="p">(</span><span class="mi">32</span> <span class="o">*</span> <span class="n">bank</span><span class="p">)</span> <span class="o">+</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC417'><br/></div><div class='line' id='LC418'>		<span class="n">spin_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">]);</span></div><div class='line' id='LC419'>		<span class="n">enabled</span> <span class="o">=</span> <span class="n">test_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">enabled_irq_map</span><span class="p">);</span></div><div class='line' id='LC420'>		<span class="n">type</span> <span class="o">=</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">gpio</span><span class="p">];</span></div><div class='line' id='LC421'>		<span class="n">spin_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">]);</span></div><div class='line' id='LC422'><br/></div><div class='line' id='LC423'>		<span class="cm">/* ack edge triggered IRQs immediately */</span></div><div class='line' id='LC424'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">type</span> <span class="o">&amp;</span> <span class="n">IRQ_TYPE_LEVEL_MASK</span><span class="p">))</span></div><div class='line' id='LC425'>			<span class="n">bcm2708_gpio_set_bit</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPEDS0</span><span class="p">,</span> <span class="n">gpio</span><span class="p">);</span></div><div class='line' id='LC426'><br/></div><div class='line' id='LC427'>		<span class="k">if</span> <span class="p">(</span><span class="n">enabled</span><span class="p">)</span></div><div class='line' id='LC428'>			<span class="n">generic_handle_irq</span><span class="p">(</span></div><div class='line' id='LC429'>				<span class="n">irq_linear_revmap</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span><span class="p">,</span> <span class="n">gpio</span><span class="p">));</span></div><div class='line' id='LC430'><br/></div><div class='line' id='LC431'>		<span class="cm">/* ack level triggered IRQ after handling them */</span></div><div class='line' id='LC432'>		<span class="k">if</span> <span class="p">(</span><span class="n">type</span> <span class="o">&amp;</span> <span class="n">IRQ_TYPE_LEVEL_MASK</span><span class="p">)</span></div><div class='line' id='LC433'>			<span class="n">bcm2708_gpio_set_bit</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPEDS0</span><span class="p">,</span> <span class="n">gpio</span><span class="p">);</span></div><div class='line' id='LC434'>	<span class="p">}</span></div><div class='line' id='LC435'>	<span class="k">return</span> <span class="n">events</span> <span class="o">?</span> <span class="n">IRQ_HANDLED</span> <span class="o">:</span> <span class="n">IRQ_NONE</span><span class="p">;</span></div><div class='line' id='LC436'><span class="p">}</span></div><div class='line' id='LC437'><br/></div><div class='line' id='LC438'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC439'>	<span class="kt">unsigned</span> <span class="n">reg</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="n">bool</span> <span class="n">enable</span><span class="p">)</span></div><div class='line' id='LC440'><span class="p">{</span></div><div class='line' id='LC441'>	<span class="kt">void</span> <span class="n">__iomem</span> <span class="o">*</span><span class="n">addr</span> <span class="o">=</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">+</span> <span class="n">reg</span> <span class="o">+</span> <span class="p">(</span><span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">offset</span><span class="p">)</span> <span class="o">*</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC442'>	<span class="n">u32</span> <span class="n">value</span> <span class="o">=</span> <span class="n">readl</span><span class="p">(</span><span class="n">addr</span><span class="p">);</span></div><div class='line' id='LC443'>	<span class="k">if</span> <span class="p">(</span><span class="n">enable</span><span class="p">)</span></div><div class='line' id='LC444'>		<span class="n">value</span> <span class="o">|=</span> <span class="n">BIT</span><span class="p">(</span><span class="n">GPIO_REG_SHIFT</span><span class="p">(</span><span class="n">offset</span><span class="p">));</span></div><div class='line' id='LC445'>	<span class="k">else</span></div><div class='line' id='LC446'>		<span class="n">value</span> <span class="o">&amp;=</span> <span class="o">~</span><span class="p">(</span><span class="n">BIT</span><span class="p">(</span><span class="n">GPIO_REG_SHIFT</span><span class="p">(</span><span class="n">offset</span><span class="p">)));</span></div><div class='line' id='LC447'>	<span class="n">writel</span><span class="p">(</span><span class="n">value</span><span class="p">,</span> <span class="n">addr</span><span class="p">);</span></div><div class='line' id='LC448'><span class="p">}</span></div><div class='line' id='LC449'><br/></div><div class='line' id='LC450'><span class="cm">/* fast path for IRQ handler */</span></div><div class='line' id='LC451'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC452'>	<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="n">bool</span> <span class="n">enable</span><span class="p">)</span></div><div class='line' id='LC453'><span class="p">{</span></div><div class='line' id='LC454'>	<span class="k">switch</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">])</span> <span class="p">{</span></div><div class='line' id='LC455'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_RISING</span>:</div><div class='line' id='LC456'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPREN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC457'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC458'><br/></div><div class='line' id='LC459'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span>:</div><div class='line' id='LC460'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPFEN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC461'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC462'><br/></div><div class='line' id='LC463'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_BOTH</span>:</div><div class='line' id='LC464'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPREN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC465'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPFEN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC466'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC467'><br/></div><div class='line' id='LC468'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_HIGH</span>:</div><div class='line' id='LC469'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPHEN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC470'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC471'><br/></div><div class='line' id='LC472'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_LOW</span>:</div><div class='line' id='LC473'>		<span class="n">__bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPLEN0</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">enable</span><span class="p">);</span></div><div class='line' id='LC474'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC475'>	<span class="p">}</span></div><div class='line' id='LC476'><span class="p">}</span></div><div class='line' id='LC477'><br/></div><div class='line' id='LC478'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_irq_enable</span><span class="p">(</span><span class="k">struct</span> <span class="n">irq_data</span> <span class="o">*</span><span class="n">data</span><span class="p">)</span></div><div class='line' id='LC479'><span class="p">{</span></div><div class='line' id='LC480'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">irq_data_get_irq_chip_data</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC481'>	<span class="kt">unsigned</span> <span class="n">offset</span> <span class="o">=</span> <span class="n">irqd_to_hwirq</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC482'>	<span class="kt">unsigned</span> <span class="n">bank</span> <span class="o">=</span> <span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC483'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC484'><br/></div><div class='line' id='LC485'>	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC486'>	<span class="n">set_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">enabled_irq_map</span><span class="p">);</span></div><div class='line' id='LC487'>	<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC488'>	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC489'><span class="p">}</span></div><div class='line' id='LC490'><br/></div><div class='line' id='LC491'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_gpio_irq_disable</span><span class="p">(</span><span class="k">struct</span> <span class="n">irq_data</span> <span class="o">*</span><span class="n">data</span><span class="p">)</span></div><div class='line' id='LC492'><span class="p">{</span></div><div class='line' id='LC493'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">irq_data_get_irq_chip_data</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC494'>	<span class="kt">unsigned</span> <span class="n">offset</span> <span class="o">=</span> <span class="n">irqd_to_hwirq</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC495'>	<span class="kt">unsigned</span> <span class="n">bank</span> <span class="o">=</span> <span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC496'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC497'><br/></div><div class='line' id='LC498'>	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC499'>	<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC500'>	<span class="n">clear_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">enabled_irq_map</span><span class="p">);</span></div><div class='line' id='LC501'>	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC502'><span class="p">}</span></div><div class='line' id='LC503'><br/></div><div class='line' id='LC504'><span class="k">static</span> <span class="kt">int</span> <span class="nf">__bcm2708_gpio_irq_set_type_disabled</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC505'>	<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">type</span><span class="p">)</span></div><div class='line' id='LC506'><span class="p">{</span></div><div class='line' id='LC507'>	<span class="k">switch</span> <span class="p">(</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC508'>	<span class="k">case</span> <span class="n">IRQ_TYPE_NONE</span>:</div><div class='line' id='LC509'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_RISING</span>:</div><div class='line' id='LC510'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span>:</div><div class='line' id='LC511'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_BOTH</span>:</div><div class='line' id='LC512'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_HIGH</span>:</div><div class='line' id='LC513'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_LOW</span>:</div><div class='line' id='LC514'>		<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC515'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC516'><br/></div><div class='line' id='LC517'>	<span class="nl">default:</span></div><div class='line' id='LC518'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC519'>	<span class="p">}</span></div><div class='line' id='LC520'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC521'><span class="p">}</span></div><div class='line' id='LC522'><br/></div><div class='line' id='LC523'><span class="cm">/* slower path for reconfiguring IRQ type */</span></div><div class='line' id='LC524'><span class="k">static</span> <span class="kt">int</span> <span class="nf">__bcm2708_gpio_irq_set_type_enabled</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC525'>	<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">type</span><span class="p">)</span></div><div class='line' id='LC526'><span class="p">{</span></div><div class='line' id='LC527'>	<span class="k">switch</span> <span class="p">(</span><span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC528'>	<span class="k">case</span> <span class="n">IRQ_TYPE_NONE</span>:</div><div class='line' id='LC529'>		<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">!=</span> <span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC530'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC531'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC532'>		<span class="p">}</span></div><div class='line' id='LC533'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC534'><br/></div><div class='line' id='LC535'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_RISING</span>:</div><div class='line' id='LC536'>		<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">==</span> <span class="n">IRQ_TYPE_EDGE_BOTH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC537'>			<span class="cm">/* RISING already enabled, disable FALLING */</span></div><div class='line' id='LC538'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span><span class="p">;</span></div><div class='line' id='LC539'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC540'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC541'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">!=</span> <span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC542'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC543'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC544'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC545'>		<span class="p">}</span></div><div class='line' id='LC546'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC547'><br/></div><div class='line' id='LC548'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span>:</div><div class='line' id='LC549'>		<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">==</span> <span class="n">IRQ_TYPE_EDGE_BOTH</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC550'>			<span class="cm">/* FALLING already enabled, disable RISING */</span></div><div class='line' id='LC551'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">IRQ_TYPE_EDGE_RISING</span><span class="p">;</span></div><div class='line' id='LC552'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC553'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC554'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">!=</span> <span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC555'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC556'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC557'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC558'>		<span class="p">}</span></div><div class='line' id='LC559'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC560'><br/></div><div class='line' id='LC561'>	<span class="k">case</span> <span class="n">IRQ_TYPE_EDGE_BOTH</span>:</div><div class='line' id='LC562'>		<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">==</span> <span class="n">IRQ_TYPE_EDGE_RISING</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC563'>			<span class="cm">/* RISING already enabled, enable FALLING too */</span></div><div class='line' id='LC564'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span><span class="p">;</span></div><div class='line' id='LC565'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC566'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC567'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">==</span> <span class="n">IRQ_TYPE_EDGE_FALLING</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC568'>			<span class="cm">/* FALLING already enabled, enable RISING too */</span></div><div class='line' id='LC569'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">IRQ_TYPE_EDGE_RISING</span><span class="p">;</span></div><div class='line' id='LC570'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC571'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC572'>		<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">!=</span> <span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC573'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC574'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC575'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC576'>		<span class="p">}</span></div><div class='line' id='LC577'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC578'><br/></div><div class='line' id='LC579'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_HIGH</span>:</div><div class='line' id='LC580'>	<span class="k">case</span> <span class="n">IRQ_TYPE_LEVEL_LOW</span>:</div><div class='line' id='LC581'>		<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">!=</span> <span class="n">type</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC582'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">false</span><span class="p">);</span></div><div class='line' id='LC583'>			<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]</span> <span class="o">=</span> <span class="n">type</span><span class="p">;</span></div><div class='line' id='LC584'>			<span class="n">bcm2708_gpio_irq_config</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="nb">true</span><span class="p">);</span></div><div class='line' id='LC585'>		<span class="p">}</span></div><div class='line' id='LC586'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC587'><br/></div><div class='line' id='LC588'>	<span class="nl">default:</span></div><div class='line' id='LC589'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC590'>	<span class="p">}</span></div><div class='line' id='LC591'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC592'><span class="p">}</span></div><div class='line' id='LC593'><br/></div><div class='line' id='LC594'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_gpio_irq_set_type</span><span class="p">(</span><span class="k">struct</span> <span class="n">irq_data</span> <span class="o">*</span><span class="n">data</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">type</span><span class="p">)</span></div><div class='line' id='LC595'><span class="p">{</span></div><div class='line' id='LC596'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">irq_data_get_irq_chip_data</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC597'>	<span class="kt">unsigned</span> <span class="n">offset</span> <span class="o">=</span> <span class="n">irqd_to_hwirq</span><span class="p">(</span><span class="n">data</span><span class="p">);</span></div><div class='line' id='LC598'>	<span class="kt">unsigned</span> <span class="n">bank</span> <span class="o">=</span> <span class="n">GPIO_REG_OFFSET</span><span class="p">(</span><span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC599'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC600'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC601'><br/></div><div class='line' id='LC602'>	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC603'><br/></div><div class='line' id='LC604'>	<span class="k">if</span> <span class="p">(</span><span class="n">test_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">enabled_irq_map</span><span class="p">))</span></div><div class='line' id='LC605'>		<span class="n">ret</span> <span class="o">=</span> <span class="n">__bcm2708_gpio_irq_set_type_enabled</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">type</span><span class="p">);</span></div><div class='line' id='LC606'>	<span class="k">else</span></div><div class='line' id='LC607'>		<span class="n">ret</span> <span class="o">=</span> <span class="n">__bcm2708_gpio_irq_set_type_disabled</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">type</span><span class="p">);</span></div><div class='line' id='LC608'><br/></div><div class='line' id='LC609'>	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">bank</span><span class="p">],</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC610'><br/></div><div class='line' id='LC611'>	<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC612'><span class="p">}</span></div><div class='line' id='LC613'><br/></div><div class='line' id='LC614'><span class="k">static</span> <span class="k">struct</span> <span class="n">irq_chip</span> <span class="n">bcm2708_gpio_irq_chip</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC615'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;GPIO-event&quot;</span><span class="p">,</span></div><div class='line' id='LC616'>	<span class="p">.</span><span class="n">irq_enable</span> <span class="o">=</span> <span class="n">bcm2708_gpio_irq_enable</span><span class="p">,</span></div><div class='line' id='LC617'>	<span class="p">.</span><span class="n">irq_disable</span> <span class="o">=</span> <span class="n">bcm2708_gpio_irq_disable</span><span class="p">,</span></div><div class='line' id='LC618'>	<span class="p">.</span><span class="n">irq_set_type</span> <span class="o">=</span> <span class="n">bcm2708_gpio_irq_set_type</span><span class="p">,</span></div><div class='line' id='LC619'><span class="p">};</span></div><div class='line' id='LC620'><br/></div><div class='line' id='LC621'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pctl_get_groups_count</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">)</span></div><div class='line' id='LC622'><span class="p">{</span></div><div class='line' id='LC623'>	<span class="cm">/* make sure all pins are defined */</span></div><div class='line' id='LC624'>	<span class="n">BUILD_BUG_ON</span><span class="p">(</span><span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_groups</span><span class="p">)</span> <span class="o">!=</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">);</span></div><div class='line' id='LC625'><br/></div><div class='line' id='LC626'>	<span class="cm">/* one group per pin */</span></div><div class='line' id='LC627'>	<span class="k">return</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_groups</span><span class="p">);</span></div><div class='line' id='LC628'><span class="p">}</span></div><div class='line' id='LC629'><br/></div><div class='line' id='LC630'><span class="k">static</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="nf">bcm2708_pctl_get_group_name</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC631'>		<span class="kt">unsigned</span> <span class="n">selector</span><span class="p">)</span></div><div class='line' id='LC632'><span class="p">{</span></div><div class='line' id='LC633'>	<span class="k">if</span> <span class="p">(</span><span class="n">selector</span> <span class="o">&gt;=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_groups</span><span class="p">))</span></div><div class='line' id='LC634'>		<span class="k">return</span> <span class="n">ERR_PTR</span><span class="p">(</span><span class="o">-</span><span class="n">EINVAL</span><span class="p">);</span></div><div class='line' id='LC635'><br/></div><div class='line' id='LC636'>	<span class="cm">/* use the pin name as the group name */</span></div><div class='line' id='LC637'>	<span class="k">return</span> <span class="n">bcm2708_gpio_groups</span><span class="p">[</span><span class="n">selector</span><span class="p">];</span></div><div class='line' id='LC638'><span class="p">}</span></div><div class='line' id='LC639'><br/></div><div class='line' id='LC640'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pctl_get_group_pins</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC641'>		<span class="kt">unsigned</span> <span class="n">selector</span><span class="p">,</span></div><div class='line' id='LC642'>		<span class="k">const</span> <span class="kt">unsigned</span> <span class="o">**</span><span class="n">pins</span><span class="p">,</span></div><div class='line' id='LC643'>		<span class="kt">unsigned</span> <span class="o">*</span><span class="n">num_pins</span><span class="p">)</span></div><div class='line' id='LC644'><span class="p">{</span></div><div class='line' id='LC645'>	<span class="cm">/* make sure we have one group per pin */</span></div><div class='line' id='LC646'>	<span class="n">BUILD_BUG_ON</span><span class="p">(</span><span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_pins</span><span class="p">)</span> <span class="o">!=</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">);</span></div><div class='line' id='LC647'><br/></div><div class='line' id='LC648'>	<span class="k">if</span> <span class="p">(</span><span class="n">selector</span> <span class="o">&gt;=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_groups</span><span class="p">))</span></div><div class='line' id='LC649'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC650'><br/></div><div class='line' id='LC651'>	<span class="o">*</span><span class="n">pins</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">bcm2708_gpio_pins</span><span class="p">[</span><span class="n">selector</span><span class="p">].</span><span class="n">number</span><span class="p">;</span></div><div class='line' id='LC652'>	<span class="o">*</span><span class="n">num_pins</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC653'><br/></div><div class='line' id='LC654'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC655'><span class="p">}</span></div><div class='line' id='LC656'><br/></div><div class='line' id='LC657'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_pctl_pin_dbg_show</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC658'>		<span class="k">struct</span> <span class="n">seq_file</span> <span class="o">*</span><span class="n">s</span><span class="p">,</span></div><div class='line' id='LC659'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC660'><span class="p">{</span></div><div class='line' id='LC661'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC662'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">fsel</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_fsel_get</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC663'>	<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fname</span> <span class="o">=</span> <span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">fsel</span><span class="p">];</span></div><div class='line' id='LC664'>	<span class="kt">int</span> <span class="n">value</span> <span class="o">=</span> <span class="n">bcm2708_gpio_get_bit</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPLEV0</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC665'>	<span class="kt">int</span> <span class="n">irq</span> <span class="o">=</span> <span class="n">irq_find_mapping</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC666'><br/></div><div class='line' id='LC667'>	<span class="n">seq_printf</span><span class="p">(</span><span class="n">s</span><span class="p">,</span> <span class="s">&quot;function %s %s; irq %d (%s)&quot;</span><span class="p">,</span></div><div class='line' id='LC668'>		<span class="n">fname</span><span class="p">,</span> <span class="n">value</span> <span class="o">?</span> <span class="s">&quot;hi&quot;</span> <span class="o">:</span> <span class="s">&quot;lo&quot;</span><span class="p">,</span></div><div class='line' id='LC669'>		<span class="n">irq</span><span class="p">,</span> <span class="n">irq_type_names</span><span class="p">[</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_type</span><span class="p">[</span><span class="n">offset</span><span class="p">]]);</span></div><div class='line' id='LC670'><br/></div><div class='line' id='LC671'>	<span class="k">if</span> <span class="p">(</span><span class="n">test_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">readonly_map</span><span class="p">))</span></div><div class='line' id='LC672'>		<span class="n">seq_puts</span><span class="p">(</span><span class="n">s</span><span class="p">,</span> <span class="s">&quot;; read-only&quot;</span><span class="p">);</span></div><div class='line' id='LC673'><span class="p">}</span></div><div class='line' id='LC674'><br/></div><div class='line' id='LC675'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_pctl_dt_free_map</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC676'>		<span class="k">struct</span> <span class="n">pinctrl_map</span> <span class="o">*</span><span class="n">maps</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="n">num_maps</span><span class="p">)</span></div><div class='line' id='LC677'><span class="p">{</span></div><div class='line' id='LC678'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC679'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC680'><br/></div><div class='line' id='LC681'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">num_maps</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC682'>		<span class="k">if</span> <span class="p">(</span><span class="n">maps</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">type</span> <span class="o">==</span> <span class="n">PIN_MAP_TYPE_CONFIGS_GROUP</span><span class="p">)</span></div><div class='line' id='LC683'>			<span class="n">devm_kfree</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="n">maps</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">data</span><span class="p">.</span><span class="n">configs</span><span class="p">.</span><span class="n">configs</span><span class="p">);</span></div><div class='line' id='LC684'>	<span class="p">}</span></div><div class='line' id='LC685'><br/></div><div class='line' id='LC686'>	<span class="n">devm_kfree</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="n">maps</span><span class="p">);</span></div><div class='line' id='LC687'><span class="p">}</span></div><div class='line' id='LC688'><br/></div><div class='line' id='LC689'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pctl_dt_node_to_map_func</span><span class="p">(</span><span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">,</span></div><div class='line' id='LC690'>		<span class="n">u32</span> <span class="n">pin</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fname</span><span class="p">,</span></div><div class='line' id='LC691'>		<span class="k">struct</span> <span class="n">pinctrl_map</span> <span class="o">**</span><span class="n">maps</span><span class="p">)</span></div><div class='line' id='LC692'><span class="p">{</span></div><div class='line' id='LC693'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC694'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">fsel</span> <span class="o">=</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC695'>	<span class="k">struct</span> <span class="n">pinctrl_map</span> <span class="o">*</span><span class="n">map</span> <span class="o">=</span> <span class="o">*</span><span class="n">maps</span><span class="p">;</span></div><div class='line' id='LC696'><br/></div><div class='line' id='LC697'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_functions</span><span class="p">);</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC698'>		<span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">fname</span><span class="p">,</span> <span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">i</span><span class="p">]))</span></div><div class='line' id='LC699'>			<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC700'><br/></div><div class='line' id='LC701'>		<span class="n">fsel</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC702'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC703'>	<span class="p">}</span></div><div class='line' id='LC704'><br/></div><div class='line' id='LC705'>	<span class="k">if</span> <span class="p">(</span><span class="n">fsel</span> <span class="o">==</span> <span class="o">-</span><span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC706'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC707'><br/></div><div class='line' id='LC708'>	<span class="n">map</span><span class="o">-&gt;</span><span class="n">type</span> <span class="o">=</span> <span class="n">PIN_MAP_TYPE_MUX_GROUP</span><span class="p">;</span></div><div class='line' id='LC709'>	<span class="n">map</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">.</span><span class="n">mux</span><span class="p">.</span><span class="n">group</span> <span class="o">=</span> <span class="n">bcm2708_gpio_groups</span><span class="p">[</span><span class="n">pin</span><span class="p">];</span></div><div class='line' id='LC710'>	<span class="n">map</span><span class="o">-&gt;</span><span class="n">data</span><span class="p">.</span><span class="n">mux</span><span class="p">.</span><span class="n">function</span> <span class="o">=</span> <span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">fsel</span><span class="p">];</span></div><div class='line' id='LC711'>	<span class="p">(</span><span class="o">*</span><span class="n">maps</span><span class="p">)</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC712'><br/></div><div class='line' id='LC713'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC714'><span class="p">}</span></div><div class='line' id='LC715'><br/></div><div class='line' id='LC716'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pctl_dt_node_to_map</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC717'>		<span class="k">struct</span> <span class="n">device_node</span> <span class="o">*</span><span class="n">np_config</span><span class="p">,</span></div><div class='line' id='LC718'>		<span class="k">struct</span> <span class="n">pinctrl_map</span> <span class="o">**</span><span class="n">map</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="o">*</span><span class="n">num_maps</span><span class="p">)</span></div><div class='line' id='LC719'><span class="p">{</span></div><div class='line' id='LC720'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC721'>	<span class="k">struct</span> <span class="n">property</span> <span class="o">*</span><span class="n">pins</span><span class="p">,</span> <span class="o">*</span><span class="n">function</span><span class="p">;</span></div><div class='line' id='LC722'>	<span class="n">bool</span> <span class="n">func_per_pin</span><span class="p">;</span></div><div class='line' id='LC723'>	<span class="kt">int</span> <span class="n">num_funcs</span><span class="p">,</span> <span class="n">num_pins</span><span class="p">,</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC724'>	<span class="k">struct</span> <span class="n">pinctrl_map</span> <span class="o">*</span><span class="n">maps</span><span class="p">,</span> <span class="o">*</span><span class="n">cur_map</span><span class="p">;</span></div><div class='line' id='LC725'>	<span class="k">const</span> <span class="n">__be32</span> <span class="o">*</span><span class="n">p</span><span class="p">;</span></div><div class='line' id='LC726'>	<span class="n">u32</span> <span class="n">pin</span><span class="p">;</span></div><div class='line' id='LC727'>	<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">fname</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC728'><br/></div><div class='line' id='LC729'>	<span class="n">pins</span> <span class="o">=</span> <span class="n">of_find_property</span><span class="p">(</span><span class="n">np_config</span><span class="p">,</span> <span class="s">&quot;broadcom,pins&quot;</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC730'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pins</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC731'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;%s: missing broadcom,pins property</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC732'>				<span class="n">np_config</span><span class="o">-&gt;</span><span class="n">full_name</span><span class="p">);</span></div><div class='line' id='LC733'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC734'>	<span class="p">}</span></div><div class='line' id='LC735'><br/></div><div class='line' id='LC736'>	<span class="n">function</span> <span class="o">=</span> <span class="n">of_find_property</span><span class="p">(</span><span class="n">np_config</span><span class="p">,</span> <span class="s">&quot;broadcom,function&quot;</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC737'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pins</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC738'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;%s: missing broadcom,function property</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC739'>				<span class="n">np_config</span><span class="o">-&gt;</span><span class="n">full_name</span><span class="p">);</span></div><div class='line' id='LC740'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC741'>	<span class="p">}</span></div><div class='line' id='LC742'><br/></div><div class='line' id='LC743'>	<span class="n">num_funcs</span> <span class="o">=</span> <span class="n">of_property_count_strings</span><span class="p">(</span><span class="n">np_config</span><span class="p">,</span> <span class="s">&quot;broadcom,function&quot;</span><span class="p">);</span></div><div class='line' id='LC744'>	<span class="n">num_pins</span> <span class="o">=</span> <span class="n">pins</span><span class="o">-&gt;</span><span class="n">length</span> <span class="o">/</span> <span class="mi">4</span><span class="p">;</span></div><div class='line' id='LC745'><br/></div><div class='line' id='LC746'>	<span class="cm">/* broadcom,function is an optional property */</span></div><div class='line' id='LC747'>	<span class="k">if</span> <span class="p">(</span><span class="n">num_funcs</span> <span class="o">==</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC748'>		<span class="n">func_per_pin</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span> <span class="cm">/* same function for all pins */</span></div><div class='line' id='LC749'>	<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">num_funcs</span> <span class="o">==</span> <span class="n">num_pins</span><span class="p">)</span></div><div class='line' id='LC750'>		<span class="n">func_per_pin</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span> <span class="cm">/* one function per pin */</span></div><div class='line' id='LC751'>	<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC752'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;%s: broadcom,function must have either 1 string or as many strings as there are pins</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC753'>				<span class="n">np_config</span><span class="o">-&gt;</span><span class="n">full_name</span><span class="p">);</span></div><div class='line' id='LC754'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC755'>	<span class="p">}</span></div><div class='line' id='LC756'><br/></div><div class='line' id='LC757'>	<span class="n">cur_map</span> <span class="o">=</span> <span class="n">maps</span> <span class="o">=</span> <span class="n">devm_kzalloc</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="n">num_pins</span> <span class="o">*</span> <span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">maps</span><span class="p">),</span></div><div class='line' id='LC758'>			<span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC759'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">maps</span><span class="p">)</span></div><div class='line' id='LC760'>		<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC761'><br/></div><div class='line' id='LC762'>	<span class="k">for</span> <span class="p">(</span><span class="n">p</span> <span class="o">=</span> <span class="n">of_prop_next_u32</span><span class="p">(</span><span class="n">pins</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pin</span><span class="p">);</span> <span class="n">p</span><span class="p">;</span></div><div class='line' id='LC763'>			<span class="n">p</span> <span class="o">=</span> <span class="n">of_prop_next_u32</span><span class="p">(</span><span class="n">pins</span><span class="p">,</span> <span class="n">p</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pin</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC764'>		<span class="k">if</span> <span class="p">(</span><span class="n">pin</span> <span class="o">&gt;=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_pins</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC765'>			<span class="n">dev_err</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;%s: pin %d out of bounds</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC766'>					<span class="n">np_config</span><span class="o">-&gt;</span><span class="n">full_name</span><span class="p">,</span> <span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC767'>			<span class="n">err</span> <span class="o">=</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC768'>			<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC769'>		<span class="p">}</span></div><div class='line' id='LC770'><br/></div><div class='line' id='LC771'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">fname</span> <span class="o">||</span> <span class="n">func_per_pin</span><span class="p">)</span></div><div class='line' id='LC772'>			<span class="n">fname</span> <span class="o">=</span> <span class="n">of_prop_next_string</span><span class="p">(</span><span class="n">function</span><span class="p">,</span> <span class="n">fname</span><span class="p">);</span></div><div class='line' id='LC773'><br/></div><div class='line' id='LC774'>		<span class="n">err</span> <span class="o">=</span> <span class="n">bcm2708_pctl_dt_node_to_map_func</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">pin</span><span class="p">,</span> <span class="n">fname</span><span class="p">,</span></div><div class='line' id='LC775'>				<span class="o">&amp;</span><span class="n">cur_map</span><span class="p">);</span></div><div class='line' id='LC776'>		<span class="k">if</span> <span class="p">(</span><span class="n">err</span><span class="p">)</span></div><div class='line' id='LC777'>			<span class="k">goto</span> <span class="n">out</span><span class="p">;</span></div><div class='line' id='LC778'>	<span class="p">}</span></div><div class='line' id='LC779'><br/></div><div class='line' id='LC780'>	<span class="o">*</span><span class="n">map</span> <span class="o">=</span> <span class="n">maps</span><span class="p">;</span></div><div class='line' id='LC781'>	<span class="o">*</span><span class="n">num_maps</span> <span class="o">=</span> <span class="n">num_pins</span><span class="p">;</span></div><div class='line' id='LC782'><br/></div><div class='line' id='LC783'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC784'><br/></div><div class='line' id='LC785'><span class="nl">out:</span></div><div class='line' id='LC786'>	<span class="n">bcm2708_pctl_dt_free_map</span><span class="p">(</span><span class="n">pctldev</span><span class="p">,</span> <span class="n">maps</span><span class="p">,</span> <span class="n">num_pins</span><span class="p">);</span></div><div class='line' id='LC787'>	<span class="k">return</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC788'><span class="p">}</span></div><div class='line' id='LC789'><br/></div><div class='line' id='LC790'><span class="k">static</span> <span class="k">struct</span> <span class="n">pinctrl_ops</span> <span class="n">bcm2708_pctl_ops</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC791'>	<span class="p">.</span><span class="n">get_groups_count</span> <span class="o">=</span> <span class="n">bcm2708_pctl_get_groups_count</span><span class="p">,</span></div><div class='line' id='LC792'>	<span class="p">.</span><span class="n">get_group_name</span> <span class="o">=</span> <span class="n">bcm2708_pctl_get_group_name</span><span class="p">,</span></div><div class='line' id='LC793'>	<span class="p">.</span><span class="n">get_group_pins</span> <span class="o">=</span> <span class="n">bcm2708_pctl_get_group_pins</span><span class="p">,</span></div><div class='line' id='LC794'>	<span class="p">.</span><span class="n">pin_dbg_show</span> <span class="o">=</span> <span class="n">bcm2708_pctl_pin_dbg_show</span><span class="p">,</span></div><div class='line' id='LC795'>	<span class="p">.</span><span class="n">dt_node_to_map</span> <span class="o">=</span> <span class="n">bcm2708_pctl_dt_node_to_map</span><span class="p">,</span></div><div class='line' id='LC796'>	<span class="p">.</span><span class="n">dt_free_map</span> <span class="o">=</span> <span class="n">bcm2708_pctl_dt_free_map</span><span class="p">,</span></div><div class='line' id='LC797'><span class="p">};</span></div><div class='line' id='LC798'><br/></div><div class='line' id='LC799'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pmx_get_functions_count</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">)</span></div><div class='line' id='LC800'><span class="p">{</span></div><div class='line' id='LC801'>	<span class="k">return</span> <span class="n">BCM2708_FSEL_COUNT</span><span class="p">;</span></div><div class='line' id='LC802'><span class="p">}</span></div><div class='line' id='LC803'><br/></div><div class='line' id='LC804'><span class="k">static</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="nf">bcm2708_pmx_get_function_name</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC805'>		<span class="kt">unsigned</span> <span class="n">selector</span><span class="p">)</span></div><div class='line' id='LC806'><span class="p">{</span></div><div class='line' id='LC807'>	<span class="k">if</span> <span class="p">(</span><span class="n">selector</span> <span class="o">&gt;=</span> <span class="n">BCM2708_FSEL_COUNT</span><span class="p">)</span></div><div class='line' id='LC808'>		<span class="k">return</span> <span class="n">ERR_PTR</span><span class="p">(</span><span class="o">-</span><span class="n">EINVAL</span><span class="p">);</span></div><div class='line' id='LC809'><br/></div><div class='line' id='LC810'>	<span class="k">return</span> <span class="n">bcm2708_functions</span><span class="p">[</span><span class="n">selector</span><span class="p">];</span></div><div class='line' id='LC811'><span class="p">}</span></div><div class='line' id='LC812'><br/></div><div class='line' id='LC813'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pmx_get_function_groups</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC814'>		<span class="kt">unsigned</span> <span class="n">selector</span><span class="p">,</span></div><div class='line' id='LC815'>		<span class="k">const</span> <span class="kt">char</span> <span class="o">*</span> <span class="k">const</span> <span class="o">**</span><span class="n">groups</span><span class="p">,</span></div><div class='line' id='LC816'>		<span class="kt">unsigned</span> <span class="o">*</span> <span class="k">const</span> <span class="n">num_groups</span><span class="p">)</span></div><div class='line' id='LC817'><span class="p">{</span></div><div class='line' id='LC818'>	<span class="k">if</span> <span class="p">(</span><span class="n">selector</span> <span class="o">&gt;=</span> <span class="n">BCM2708_FSEL_COUNT</span><span class="p">)</span></div><div class='line' id='LC819'>		<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC820'><br/></div><div class='line' id='LC821'>	<span class="cm">/* every pin can do every function */</span></div><div class='line' id='LC822'>	<span class="o">*</span><span class="n">groups</span> <span class="o">=</span> <span class="n">bcm2708_gpio_groups</span><span class="p">;</span></div><div class='line' id='LC823'>	<span class="o">*</span><span class="n">num_groups</span> <span class="o">=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_groups</span><span class="p">);</span></div><div class='line' id='LC824'><br/></div><div class='line' id='LC825'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC826'><span class="p">}</span></div><div class='line' id='LC827'><br/></div><div class='line' id='LC828'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pmx_enable</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC829'>		<span class="kt">unsigned</span> <span class="n">func_selector</span><span class="p">,</span></div><div class='line' id='LC830'>		<span class="kt">unsigned</span> <span class="n">group_selector</span><span class="p">)</span></div><div class='line' id='LC831'><span class="p">{</span></div><div class='line' id='LC832'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC833'><br/></div><div class='line' id='LC834'>	<span class="k">struct</span> <span class="n">pin_desc</span> <span class="o">*</span><span class="n">desc</span> <span class="o">=</span> <span class="n">pin_desc_get</span><span class="p">(</span><span class="n">pctldev</span><span class="p">,</span> <span class="n">group_selector</span><span class="p">);</span></div><div class='line' id='LC835'>	<span class="k">if</span> <span class="p">(</span><span class="n">desc</span><span class="o">-&gt;</span><span class="n">gpio_owner</span><span class="p">)</span></div><div class='line' id='LC836'>		<span class="k">return</span> <span class="o">-</span><span class="n">EBUSY</span><span class="p">;</span></div><div class='line' id='LC837'><br/></div><div class='line' id='LC838'>	<span class="k">if</span> <span class="p">(</span><span class="n">bcm2708_check_readonly</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">group_selector</span><span class="p">,</span> <span class="n">func_selector</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC839'>		<span class="n">dev_warn</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;refusing to change mode of read-only pin %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC840'>			<span class="n">group_selector</span><span class="p">);</span></div><div class='line' id='LC841'>		<span class="k">return</span> <span class="o">-</span><span class="n">EPERM</span><span class="p">;</span></div><div class='line' id='LC842'>	<span class="p">}</span></div><div class='line' id='LC843'><br/></div><div class='line' id='LC844'>	<span class="n">bcm2708_pinctrl_fsel_set</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">group_selector</span><span class="p">,</span> <span class="n">func_selector</span><span class="p">);</span></div><div class='line' id='LC845'><br/></div><div class='line' id='LC846'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC847'><span class="p">}</span></div><div class='line' id='LC848'><br/></div><div class='line' id='LC849'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_pmx_disable</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC850'>		<span class="kt">unsigned</span> <span class="n">func_selector</span><span class="p">,</span></div><div class='line' id='LC851'>		<span class="kt">unsigned</span> <span class="n">group_selector</span><span class="p">)</span></div><div class='line' id='LC852'><span class="p">{</span></div><div class='line' id='LC853'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC854'><br/></div><div class='line' id='LC855'>	<span class="k">if</span> <span class="p">(</span><span class="n">test_bit</span><span class="p">(</span><span class="n">group_selector</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">readonly_map</span><span class="p">))</span></div><div class='line' id='LC856'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC857'><br/></div><div class='line' id='LC858'>	<span class="cm">/* disable by setting to GPIO_IN */</span></div><div class='line' id='LC859'>	<span class="n">bcm2708_pinctrl_fsel_set</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">group_selector</span><span class="p">,</span> <span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">);</span></div><div class='line' id='LC860'><span class="p">}</span></div><div class='line' id='LC861'><br/></div><div class='line' id='LC862'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pmx_gpio_request_enable</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC863'>		<span class="k">struct</span> <span class="n">pinctrl_gpio_range</span> <span class="o">*</span><span class="n">range</span><span class="p">,</span></div><div class='line' id='LC864'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC865'><span class="p">{</span></div><div class='line' id='LC866'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC867'><br/></div><div class='line' id='LC868'>	<span class="k">struct</span> <span class="n">pin_desc</span> <span class="o">*</span><span class="n">desc</span> <span class="o">=</span> <span class="n">pin_desc_get</span><span class="p">(</span><span class="n">pctldev</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC869'>	<span class="k">if</span> <span class="p">(</span><span class="n">desc</span><span class="o">-&gt;</span><span class="n">mux_usecount</span><span class="p">)</span></div><div class='line' id='LC870'>		<span class="k">return</span> <span class="o">-</span><span class="n">EBUSY</span><span class="p">;</span></div><div class='line' id='LC871'><br/></div><div class='line' id='LC872'>	<span class="k">if</span> <span class="p">(</span><span class="n">bcm2708_check_readonly</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC873'>		<span class="n">dev_warn</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;refusing to change mode of read-only pin %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC874'>			<span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC875'>		<span class="k">return</span> <span class="o">-</span><span class="n">EPERM</span><span class="p">;</span></div><div class='line' id='LC876'>	<span class="p">}</span></div><div class='line' id='LC877'><br/></div><div class='line' id='LC878'>	<span class="n">bcm2708_pinctrl_fsel_set</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">);</span></div><div class='line' id='LC879'><br/></div><div class='line' id='LC880'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC881'><span class="p">}</span></div><div class='line' id='LC882'><br/></div><div class='line' id='LC883'><span class="k">static</span> <span class="kt">void</span> <span class="nf">bcm2708_pmx_gpio_disable_free</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC884'>		<span class="k">struct</span> <span class="n">pinctrl_gpio_range</span> <span class="o">*</span><span class="n">range</span><span class="p">,</span></div><div class='line' id='LC885'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">)</span></div><div class='line' id='LC886'><span class="p">{</span></div><div class='line' id='LC887'>	<span class="k">return</span> <span class="n">bcm2708_pmx_disable</span><span class="p">(</span><span class="n">pctldev</span><span class="p">,</span> <span class="n">BCM2708_FSEL_GPIO_IN</span><span class="p">,</span> <span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC888'><span class="p">}</span></div><div class='line' id='LC889'><br/></div><div class='line' id='LC890'><span class="k">static</span> <span class="kt">int</span> <span class="nf">bcm2708_pmx_gpio_set_direction</span><span class="p">(</span><span class="k">struct</span> <span class="n">pinctrl_dev</span> <span class="o">*</span><span class="n">pctldev</span><span class="p">,</span></div><div class='line' id='LC891'>		<span class="k">struct</span> <span class="n">pinctrl_gpio_range</span> <span class="o">*</span><span class="n">range</span><span class="p">,</span></div><div class='line' id='LC892'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">,</span></div><div class='line' id='LC893'>		<span class="n">bool</span> <span class="n">input</span><span class="p">)</span></div><div class='line' id='LC894'><span class="p">{</span></div><div class='line' id='LC895'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pinctrl_dev_get_drvdata</span><span class="p">(</span><span class="n">pctldev</span><span class="p">);</span></div><div class='line' id='LC896'>	<span class="k">enum</span> <span class="n">bcm2708_fsel</span> <span class="n">fsel</span> <span class="o">=</span> <span class="n">input</span> <span class="o">?</span></div><div class='line' id='LC897'>		<span class="n">BCM2708_FSEL_GPIO_IN</span> <span class="o">:</span> <span class="n">BCM2708_FSEL_GPIO_OUT</span><span class="p">;</span></div><div class='line' id='LC898'><br/></div><div class='line' id='LC899'>	<span class="k">if</span> <span class="p">(</span><span class="n">bcm2708_check_readonly</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">fsel</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC900'>		<span class="n">dev_warn</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;refusing to change mode of read-only pin %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC901'>			<span class="n">offset</span><span class="p">);</span></div><div class='line' id='LC902'>		<span class="k">return</span> <span class="o">-</span><span class="n">EPERM</span><span class="p">;</span></div><div class='line' id='LC903'>	<span class="p">}</span></div><div class='line' id='LC904'><br/></div><div class='line' id='LC905'>	<span class="n">bcm2708_pinctrl_fsel_set</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">offset</span><span class="p">,</span> <span class="n">fsel</span><span class="p">);</span></div><div class='line' id='LC906'><br/></div><div class='line' id='LC907'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC908'><span class="p">}</span></div><div class='line' id='LC909'><br/></div><div class='line' id='LC910'><span class="k">static</span> <span class="k">struct</span> <span class="n">pinmux_ops</span> <span class="n">bcm2708_pmx_ops</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC911'>	<span class="p">.</span><span class="n">get_functions_count</span> <span class="o">=</span> <span class="n">bcm2708_pmx_get_functions_count</span><span class="p">,</span></div><div class='line' id='LC912'>	<span class="p">.</span><span class="n">get_function_name</span> <span class="o">=</span> <span class="n">bcm2708_pmx_get_function_name</span><span class="p">,</span></div><div class='line' id='LC913'>	<span class="p">.</span><span class="n">get_function_groups</span> <span class="o">=</span> <span class="n">bcm2708_pmx_get_function_groups</span><span class="p">,</span></div><div class='line' id='LC914'>	<span class="p">.</span><span class="n">enable</span> <span class="o">=</span> <span class="n">bcm2708_pmx_enable</span><span class="p">,</span></div><div class='line' id='LC915'>	<span class="p">.</span><span class="n">disable</span> <span class="o">=</span> <span class="n">bcm2708_pmx_disable</span><span class="p">,</span></div><div class='line' id='LC916'>	<span class="p">.</span><span class="n">gpio_request_enable</span> <span class="o">=</span> <span class="n">bcm2708_pmx_gpio_request_enable</span><span class="p">,</span></div><div class='line' id='LC917'>	<span class="p">.</span><span class="n">gpio_disable_free</span> <span class="o">=</span> <span class="n">bcm2708_pmx_gpio_disable_free</span><span class="p">,</span></div><div class='line' id='LC918'>	<span class="p">.</span><span class="n">gpio_set_direction</span> <span class="o">=</span> <span class="n">bcm2708_pmx_gpio_set_direction</span><span class="p">,</span></div><div class='line' id='LC919'><span class="p">};</span></div><div class='line' id='LC920'><br/></div><div class='line' id='LC921'><span class="k">static</span> <span class="k">struct</span> <span class="n">pinctrl_desc</span> <span class="n">bcm2708_pinctrl_desc</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC922'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="n">MODULE_NAME</span><span class="p">,</span></div><div class='line' id='LC923'>	<span class="p">.</span><span class="n">pins</span> <span class="o">=</span> <span class="n">bcm2708_gpio_pins</span><span class="p">,</span></div><div class='line' id='LC924'>	<span class="p">.</span><span class="n">npins</span> <span class="o">=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_pins</span><span class="p">),</span></div><div class='line' id='LC925'>	<span class="p">.</span><span class="n">pctlops</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">bcm2708_pctl_ops</span><span class="p">,</span></div><div class='line' id='LC926'>	<span class="p">.</span><span class="n">pmxops</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">bcm2708_pmx_ops</span><span class="p">,</span></div><div class='line' id='LC927'>	<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC928'><span class="p">};</span></div><div class='line' id='LC929'><br/></div><div class='line' id='LC930'><span class="k">static</span> <span class="k">struct</span> <span class="n">pinctrl_gpio_range</span> <span class="n">bcm2708_pinctrl_gpio_range</span> <span class="n">__devinitconst</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC931'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;GPIO&quot;</span><span class="p">,</span></div><div class='line' id='LC932'>	<span class="p">.</span><span class="n">base</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC933'>	<span class="p">.</span><span class="n">pin_base</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span></div><div class='line' id='LC934'>	<span class="p">.</span><span class="n">npins</span> <span class="o">=</span> <span class="n">ARRAY_SIZE</span><span class="p">(</span><span class="n">bcm2708_gpio_pins</span><span class="p">),</span></div><div class='line' id='LC935'><span class="p">};</span></div><div class='line' id='LC936'><br/></div><div class='line' id='LC937'><span class="k">static</span> <span class="kt">int</span> <span class="n">__devinit</span> <span class="nf">bcm2708_pinctrl_probe</span><span class="p">(</span><span class="k">struct</span> <span class="n">platform_device</span> <span class="o">*</span><span class="n">pdev</span><span class="p">)</span></div><div class='line' id='LC938'><span class="p">{</span></div><div class='line' id='LC939'>	<span class="k">struct</span> <span class="n">device</span> <span class="o">*</span><span class="n">dev</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">pdev</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">;</span></div><div class='line' id='LC940'>	<span class="k">struct</span> <span class="n">device_node</span> <span class="o">*</span><span class="n">np</span> <span class="o">=</span> <span class="n">dev</span><span class="o">-&gt;</span><span class="n">of_node</span><span class="p">;</span></div><div class='line' id='LC941'>	<span class="k">struct</span> <span class="n">resource</span> <span class="n">iomem</span><span class="p">;</span></div><div class='line' id='LC942'>	<span class="kt">int</span> <span class="n">err</span><span class="p">,</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC943'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span><span class="p">;</span></div><div class='line' id='LC944'>	<span class="k">struct</span> <span class="n">property</span> <span class="o">*</span><span class="n">prop_ro</span><span class="p">;</span></div><div class='line' id='LC945'>	<span class="k">const</span> <span class="n">__be32</span> <span class="o">*</span><span class="n">p</span><span class="p">;</span></div><div class='line' id='LC946'>	<span class="n">u32</span> <span class="n">pin</span><span class="p">;</span></div><div class='line' id='LC947'><br/></div><div class='line' id='LC948'>	<span class="n">err</span> <span class="o">=</span> <span class="n">of_address_to_resource</span><span class="p">(</span><span class="n">np</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">iomem</span><span class="p">);</span></div><div class='line' id='LC949'>	<span class="k">if</span> <span class="p">(</span><span class="n">err</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC950'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;could not get IO memory</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC951'>		<span class="k">return</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC952'>	<span class="p">}</span></div><div class='line' id='LC953'><br/></div><div class='line' id='LC954'>	<span class="n">pc</span> <span class="o">=</span> <span class="n">devm_kzalloc</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="o">*</span><span class="n">pc</span><span class="p">),</span> <span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC955'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pc</span><span class="p">)</span></div><div class='line' id='LC956'>		<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC957'><br/></div><div class='line' id='LC958'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span> <span class="o">=</span> <span class="n">dev</span><span class="p">;</span></div><div class='line' id='LC959'><br/></div><div class='line' id='LC960'>	<span class="n">of_property_for_each_u32</span><span class="p">(</span><span class="n">np</span><span class="p">,</span> <span class="s">&quot;broadcom,read-only&quot;</span><span class="p">,</span> <span class="n">prop_ro</span><span class="p">,</span> <span class="n">p</span><span class="p">,</span> <span class="n">pin</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC961'>		<span class="k">if</span> <span class="p">(</span><span class="n">pin</span> <span class="o">&gt;=</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC962'>			<span class="n">dev_err</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;cannot set %d read-only: out of bounds</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC963'>				<span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC964'>			<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC965'>		<span class="p">}</span></div><div class='line' id='LC966'><br/></div><div class='line' id='LC967'>		<span class="n">dev_dbg</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;setting pin %d read-only</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">pin</span><span class="p">);</span></div><div class='line' id='LC968'>		<span class="n">set_bit</span><span class="p">(</span><span class="n">pin</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">readonly_map</span><span class="p">);</span></div><div class='line' id='LC969'>	<span class="p">}</span></div><div class='line' id='LC970'><br/></div><div class='line' id='LC971'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span> <span class="o">=</span> <span class="n">devm_request_and_ioremap</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pdev</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">iomem</span><span class="p">);</span></div><div class='line' id='LC972'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">base</span><span class="p">)</span></div><div class='line' id='LC973'>		<span class="k">return</span> <span class="o">-</span><span class="n">EADDRNOTAVAIL</span><span class="p">;</span></div><div class='line' id='LC974'><br/></div><div class='line' id='LC975'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span> <span class="o">=</span> <span class="n">bcm2708_gpio_chip</span><span class="p">;</span></div><div class='line' id='LC976'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span><span class="p">.</span><span class="n">dev</span> <span class="o">=</span> <span class="n">dev</span><span class="p">;</span></div><div class='line' id='LC977'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span><span class="p">.</span><span class="n">of_node</span> <span class="o">=</span> <span class="n">np</span><span class="p">;</span></div><div class='line' id='LC978'><br/></div><div class='line' id='LC979'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span> <span class="o">=</span> <span class="n">irq_domain_add_linear</span><span class="p">(</span><span class="n">np</span><span class="p">,</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">,</span></div><div class='line' id='LC980'>			<span class="o">&amp;</span><span class="n">irq_domain_simple_ops</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC981'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC982'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;could not create IRQ domain</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC983'>		<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC984'>	<span class="p">}</span></div><div class='line' id='LC985'><br/></div><div class='line' id='LC986'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">BCM2708_NUM_GPIOS</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC987'>		<span class="kt">int</span> <span class="n">irq</span> <span class="o">=</span> <span class="n">irq_create_mapping</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_domain</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC988'>		<span class="n">irq_set_lockdep_class</span><span class="p">(</span><span class="n">irq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">gpio_lock_class</span><span class="p">);</span></div><div class='line' id='LC989'>		<span class="n">irq_set_chip_and_handler</span><span class="p">(</span><span class="n">irq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">bcm2708_gpio_irq_chip</span><span class="p">,</span></div><div class='line' id='LC990'>				<span class="n">handle_simple_irq</span><span class="p">);</span></div><div class='line' id='LC991'>		<span class="n">irq_set_chip_data</span><span class="p">(</span><span class="n">irq</span><span class="p">,</span> <span class="n">pc</span><span class="p">);</span></div><div class='line' id='LC992'>		<span class="n">set_irq_flags</span><span class="p">(</span><span class="n">irq</span><span class="p">,</span> <span class="n">IRQF_VALID</span><span class="p">);</span></div><div class='line' id='LC993'>	<span class="p">}</span></div><div class='line' id='LC994'><br/></div><div class='line' id='LC995'>	<span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">BCM2708_NUM_BANKS</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC996'>		<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">events</span><span class="p">;</span></div><div class='line' id='LC997'>		<span class="kt">unsigned</span> <span class="n">offset</span><span class="p">;</span></div><div class='line' id='LC998'>		<span class="kt">int</span> <span class="n">len</span><span class="p">;</span></div><div class='line' id='LC999'>		<span class="kt">char</span> <span class="o">*</span><span class="n">name</span><span class="p">;</span></div><div class='line' id='LC1000'><br/></div><div class='line' id='LC1001'>		<span class="cm">/* clear event detection flags */</span></div><div class='line' id='LC1002'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPREN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1003'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPFEN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1004'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPHEN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1005'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPLEN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1006'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPAREN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1007'>		<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPAFEN0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC1008'><br/></div><div class='line' id='LC1009'>		<span class="cm">/* clear all the events */</span></div><div class='line' id='LC1010'>		<span class="n">events</span> <span class="o">=</span> <span class="n">bcm2708_gpio_rd</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPEDS0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC1011'>		<span class="n">for_each_set_bit</span><span class="p">(</span><span class="n">offset</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">events</span><span class="p">,</span> <span class="mi">32</span><span class="p">)</span></div><div class='line' id='LC1012'>			<span class="n">bcm2708_gpio_wr</span><span class="p">(</span><span class="n">pc</span><span class="p">,</span> <span class="n">GPEDS0</span> <span class="o">+</span> <span class="n">i</span> <span class="o">*</span> <span class="mi">4</span><span class="p">,</span> <span class="n">BIT</span><span class="p">(</span><span class="n">offset</span><span class="p">));</span></div><div class='line' id='LC1013'><br/></div><div class='line' id='LC1014'>		<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="n">irq_of_parse_and_map</span><span class="p">(</span><span class="n">np</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC1015'>		<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_data</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">pc</span> <span class="o">=</span> <span class="n">pc</span><span class="p">;</span></div><div class='line' id='LC1016'>		<span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_data</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">bank</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC1017'>		<span class="n">spin_lock_init</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_lock</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC1018'><br/></div><div class='line' id='LC1019'>		<span class="n">len</span> <span class="o">=</span> <span class="n">strlen</span><span class="p">(</span><span class="n">dev_name</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">))</span> <span class="o">+</span> <span class="mi">16</span><span class="p">;</span></div><div class='line' id='LC1020'>		<span class="n">name</span> <span class="o">=</span> <span class="n">devm_kzalloc</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC1021'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">name</span><span class="p">)</span></div><div class='line' id='LC1022'>			<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC1023'>		<span class="n">snprintf</span><span class="p">(</span><span class="n">name</span><span class="p">,</span> <span class="n">len</span><span class="p">,</span> <span class="s">&quot;%s:bank%d&quot;</span><span class="p">,</span> <span class="n">dev_name</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">dev</span><span class="p">),</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC1024'><br/></div><div class='line' id='LC1025'>		<span class="n">err</span> <span class="o">=</span> <span class="n">devm_request_irq</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq</span><span class="p">[</span><span class="n">i</span><span class="p">],</span></div><div class='line' id='LC1026'>			<span class="n">bcm2708_gpio_irq_handler</span><span class="p">,</span> <span class="n">IRQF_SHARED</span><span class="p">,</span></div><div class='line' id='LC1027'>			<span class="n">name</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq_data</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC1028'>		<span class="k">if</span> <span class="p">(</span><span class="n">err</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1029'>			<span class="n">dev_err</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;unable to request IRQ %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">pc</span><span class="o">-&gt;</span><span class="n">irq</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC1030'>			<span class="k">return</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC1031'>		<span class="p">}</span></div><div class='line' id='LC1032'>	<span class="p">}</span></div><div class='line' id='LC1033'><br/></div><div class='line' id='LC1034'>	<span class="n">err</span> <span class="o">=</span> <span class="n">gpiochip_add</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span><span class="p">);</span></div><div class='line' id='LC1035'>	<span class="k">if</span> <span class="p">(</span><span class="n">err</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1036'>		<span class="n">dev_err</span><span class="p">(</span><span class="n">dev</span><span class="p">,</span> <span class="s">&quot;could not add GPIO chip</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span></div><div class='line' id='LC1037'>		<span class="k">return</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC1038'>	<span class="p">}</span></div><div class='line' id='LC1039'><br/></div><div class='line' id='LC1040'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span> <span class="o">=</span> <span class="n">pinctrl_register</span><span class="p">(</span><span class="o">&amp;</span><span class="n">bcm2708_pinctrl_desc</span><span class="p">,</span> <span class="n">dev</span><span class="p">,</span> <span class="n">pc</span><span class="p">);</span></div><div class='line' id='LC1041'>	<span class="k">if</span> <span class="p">(</span><span class="n">IS_ERR</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">))</span></div><div class='line' id='LC1042'>		<span class="k">return</span> <span class="n">PTR_ERR</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">);</span></div><div class='line' id='LC1043'><br/></div><div class='line' id='LC1044'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_range</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_gpio_range</span><span class="p">;</span></div><div class='line' id='LC1045'>	<span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_range</span><span class="p">.</span><span class="n">gc</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span><span class="p">;</span></div><div class='line' id='LC1046'><br/></div><div class='line' id='LC1047'>	<span class="n">pinctrl_add_gpio_range</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_range</span><span class="p">);</span></div><div class='line' id='LC1048'><br/></div><div class='line' id='LC1049'>	<span class="n">platform_set_drvdata</span><span class="p">(</span><span class="n">pdev</span><span class="p">,</span> <span class="n">pc</span><span class="p">);</span></div><div class='line' id='LC1050'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC1051'><span class="p">}</span></div><div class='line' id='LC1052'><br/></div><div class='line' id='LC1053'><span class="k">static</span> <span class="kt">int</span> <span class="n">__devexit</span> <span class="nf">bcm2708_pinctrl_remove</span><span class="p">(</span><span class="k">struct</span> <span class="n">platform_device</span> <span class="o">*</span><span class="n">pdev</span><span class="p">)</span></div><div class='line' id='LC1054'><span class="p">{</span></div><div class='line' id='LC1055'>	<span class="k">struct</span> <span class="n">bcm2708_pinctrl</span> <span class="o">*</span><span class="n">pc</span> <span class="o">=</span> <span class="n">platform_get_drvdata</span><span class="p">(</span><span class="n">pdev</span><span class="p">);</span></div><div class='line' id='LC1056'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC1057'><br/></div><div class='line' id='LC1058'>	<span class="k">if</span> <span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC1059'>		<span class="n">pinctrl_remove_gpio_range</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_range</span><span class="p">);</span></div><div class='line' id='LC1060'>		<span class="n">pinctrl_unregister</span><span class="p">(</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span><span class="p">);</span></div><div class='line' id='LC1061'>		<span class="n">pc</span><span class="o">-&gt;</span><span class="n">pctl_dev</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></div><div class='line' id='LC1062'>	<span class="p">}</span></div><div class='line' id='LC1063'><br/></div><div class='line' id='LC1064'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">gpiochip_remove</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pc</span><span class="o">-&gt;</span><span class="n">gpio_chip</span><span class="p">);</span></div><div class='line' id='LC1065'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span><span class="p">)</span></div><div class='line' id='LC1066'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC1067'><br/></div><div class='line' id='LC1068'>	<span class="n">platform_set_drvdata</span><span class="p">(</span><span class="n">pdev</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC1069'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC1070'><span class="p">}</span></div><div class='line' id='LC1071'><br/></div><div class='line' id='LC1072'><span class="k">static</span> <span class="k">struct</span> <span class="n">of_device_id</span> <span class="n">bcm2708_pinctrl_match</span><span class="p">[]</span> <span class="n">__devinitconst</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC1073'>	<span class="p">{</span> <span class="p">.</span><span class="n">compatible</span> <span class="o">=</span> <span class="s">&quot;broadcom,bcm2708-gpio&quot;</span> <span class="p">},</span></div><div class='line' id='LC1074'>	<span class="p">{}</span></div><div class='line' id='LC1075'><span class="p">};</span></div><div class='line' id='LC1076'><span class="n">MODULE_DEVICE_TABLE</span><span class="p">(</span><span class="n">of</span><span class="p">,</span> <span class="n">bcm2708_pinctrl_match</span><span class="p">);</span></div><div class='line' id='LC1077'><br/></div><div class='line' id='LC1078'><span class="k">static</span> <span class="k">struct</span> <span class="n">platform_driver</span> <span class="n">bcm2708_pinctrl_driver</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC1079'>	<span class="p">.</span><span class="n">probe</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_probe</span><span class="p">,</span></div><div class='line' id='LC1080'>	<span class="p">.</span><span class="n">remove</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_remove</span><span class="p">,</span></div><div class='line' id='LC1081'>	<span class="p">.</span><span class="n">driver</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC1082'>		<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="n">MODULE_NAME</span><span class="p">,</span></div><div class='line' id='LC1083'>		<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC1084'>		<span class="p">.</span><span class="n">of_match_table</span> <span class="o">=</span> <span class="n">bcm2708_pinctrl_match</span><span class="p">,</span></div><div class='line' id='LC1085'>	<span class="p">},</span></div><div class='line' id='LC1086'><span class="p">};</span></div><div class='line' id='LC1087'><br/></div><div class='line' id='LC1088'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">bcm2708_pinctrl_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC1089'><span class="p">{</span></div><div class='line' id='LC1090'>	<span class="k">return</span> <span class="n">platform_driver_register</span><span class="p">(</span><span class="o">&amp;</span><span class="n">bcm2708_pinctrl_driver</span><span class="p">);</span></div><div class='line' id='LC1091'><span class="p">}</span></div><div class='line' id='LC1092'><br/></div><div class='line' id='LC1093'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">bcm2708_pinctrl_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC1094'><span class="p">{</span></div><div class='line' id='LC1095'>	<span class="n">platform_driver_unregister</span><span class="p">(</span><span class="o">&amp;</span><span class="n">bcm2708_pinctrl_driver</span><span class="p">);</span></div><div class='line' id='LC1096'><span class="p">}</span></div><div class='line' id='LC1097'><br/></div><div class='line' id='LC1098'><span class="n">arch_initcall</span><span class="p">(</span><span class="n">bcm2708_pinctrl_init</span><span class="p">);</span></div><div class='line' id='LC1099'><span class="n">module_exit</span><span class="p">(</span><span class="n">bcm2708_pinctrl_exit</span><span class="p">);</span></div><div class='line' id='LC1100'><br/></div><div class='line' id='LC1101'><span class="n">MODULE_AUTHOR</span><span class="p">(</span><span class="s">&quot;Chris Boot &amp; Simon Arlott&quot;</span><span class="p">);</span></div><div class='line' id='LC1102'><span class="n">MODULE_DESCRIPTION</span><span class="p">(</span><span class="s">&quot;BCM2708 Pin control driver&quot;</span><span class="p">);</span></div><div class='line' id='LC1103'><span class="n">MODULE_LICENSE</span><span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>
      </div>
    </div>

  </div>

<div class="frame frame-loading large-loading-area" style="display:none;" data-tree-list-url="/lp0/linux/tree-list/6de36545990e40ee94c2fc3817a7f8e21aa11710" data-blob-url-prefix="/lp0/linux/blob/6de36545990e40ee94c2fc3817a7f8e21aa11710">
  <img src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543534" height="64" width="64">
</div>

        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer" >
        
  <div class="upper_footer">
     <div class="container clearfix">

       <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
       <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

       <ul class="footer_nav">
         <h4>GitHub</h4>
         <li><a href="https://github.com/about">About</a></li>
         <li><a href="https://github.com/blog">Blog</a></li>
         <li><a href="https://github.com/features">Features</a></li>
         <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
         <li><a href="https://github.com/training">Training</a></li>
         <li><a href="http://enterprise.github.com/">GitHub Enterprise</a></li>
         <li><a href="http://status.github.com/">Site Status</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Clients</h4>
         <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
         <li><a href="http://windows.github.com/">GitHub for Windows</a></li>
         <li><a href="http://eclipse.github.com/">GitHub for Eclipse</a></li>
         <li><a href="http://mobile.github.com/">GitHub Mobile Apps</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Tools</h4>
         <li><a href="http://get.gaug.es/">Gauges: Web analytics</a></li>
         <li><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></li>
         <li><a href="https://gist.github.com">Gist: Code snippets</a></li>

         <h4 class="second">Extras</h4>
         <li><a href="http://jobs.github.com/">Job Board</a></li>
         <li><a href="http://shop.github.com/">GitHub Shop</a></li>
         <li><a href="http://octodex.github.com/">The Octodex</a></li>
       </ul>

       <ul class="footer_nav">
         <h4>Documentation</h4>
         <li><a href="http://help.github.com/">GitHub Help</a></li>
         <li><a href="http://developer.github.com/">Developer API</a></li>
         <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
         <li><a href="http://pages.github.com/">GitHub Pages</a></li>
       </ul>

     </div><!-- /.site -->
  </div><!-- /.upper_footer -->

<div class="lower_footer">
  <div class="container clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
          <li><a href="https://github.com/site/terms">Terms of Service</a></li>
          <li><a href="https://github.com/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2012 <span title="0.91817s from fe14.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

  </div><!-- /.site -->
</div><!-- /.lower_footer -->

      </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus command bar</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last js-hidden-pane" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selection down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selection up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
        <dd>Submit comment</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
        <dd>Preview comment</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle selection</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> shift p</dt>
          <dd>Preview comment</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Issues Dashboard</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div class="js-hidden-pane" >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first js-hidden-pane" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>w</dt>
          <dd>Switch branch/tag</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first">
        <h3>Browsing Commits</h3>
        <dl class="keyboard-mappings">
          <dt><span class="platform-mac">⌘</span><span class="platform-other">ctrl</span> <em>+</em> enter</dt>
          <dd>Submit comment</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>escape</dt>
          <dd>Close form</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>p</dt>
          <dd>Parent commit</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o</dt>
          <dd>Other parent commit</dd>
        </dl>
      </div>
    </div>
  </div>

  <div class="js-hidden-pane" style='display:none'>
    <div class="rule"></div>
    <h3>Notifications</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selection down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selection up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open notification</dd>
        </dl>
      </div><!-- /.column.first -->

      <div class="column second">
        <dl class="keyboard-mappings">
          <dt>e <em>or</em> shift i <em>or</em> y</dt>
          <dd>Mark as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift m</dt>
          <dd>Mute thread</dd>
        </dl>
      </div><!-- /.column.first -->
    </div>
  </div>

</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:

> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>


    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    <div id="logo-popup">
      <h2>Looking for the GitHub logo?</h2>
      <ul>
        <li>
          <h4>GitHub Logo</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip"><img alt="Github_logo" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/github_logo.png?1329921026" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/GitHub_Logos.zip" class="minibutton download">Download</a>
        </li>
        <li>
          <h4>The Octocat</h4>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip"><img alt="Octocat" src="https://a248.e.akamai.net/assets.github.com/images/modules/about_page/octocat.png?1329921026" /></a>
          <a href="http://github-media-downloads.s3.amazonaws.com/Octocats.zip" class="minibutton download">Download</a>
        </li>
      </ul>
    </div>

    
    
    <span id='server_response_time' data-time='0.92005' data-host='fe14'></span>
    
  </body>
</html>

