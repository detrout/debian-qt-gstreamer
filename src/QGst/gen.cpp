// Autogenerated by the QtGStreamer helper code generator - DO NOT EDIT
/*
    Copyright (C) 2010 George Kiagiadakis <kiagiadakis.george@gmail.com>
    Copyright (C) 2010 Collabora Ltd.
      @author George Kiagiadakis <george.kiagiadakis@collabora.co.uk>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define INCLUDED_FROM_CODEGEN
#include <boost/static_assert.hpp>

#define REGISTER_TYPE_IMPLEMENTATION(T, GTYPE) \
    namespace QGlib { \
        GetTypeImpl<T>::operator Type() { return (GTYPE); } \
    }

#include <gst/gst.h>
#include <gst/interfaces/interfaces-enumtypes.h>
#include <gst/interfaces/xoverlay.h>
#include <gst/interfaces/streamvolume.h>
#include <gst/interfaces/colorbalance.h>
#include <gst/interfaces/videoorientation.h>
#include <gst/interfaces/propertyprobe.h>
#include <gst/app/gstappsrc.h>
#include <QGlib/Quark>
#include "QGst/bufferlist.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::BufferList,GST_TYPE_BUFFER_LIST)

namespace QGst {
  QGlib::RefCountedObject *BufferList_new(void *instance)
  {
    QGst::BufferList *cppClass = new QGst::BufferList;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/clocktime.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::ClockTime,GST_TYPE_CLOCK_TIME)

#include "QGst/init.h"

#include "QGst/bin.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Bin,GST_TYPE_BIN)

namespace QGst {
  QGlib::RefCountedObject *Bin_new(void *instance)
  {
    QGst::Bin *cppClass = new QGst::Bin;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst



#include "QGst/event.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Event,GST_TYPE_EVENT)

namespace QGst {
  QGlib::RefCountedObject *Event_new(void *instance)
  {
    QGst::Event *cppClass = NULL;
    switch(GST_EVENT_TYPE(instance)) {
    case QGst::EventFlushStart:
      cppClass = new QGst::FlushStartEvent;
      break;
    case QGst::EventFlushStop:
      cppClass = new QGst::FlushStopEvent;
      break;
    case QGst::EventEos:
      cppClass = new QGst::EosEvent;
      break;
    case QGst::EventNewSegment:
      cppClass = new QGst::NewSegmentEvent;
      break;
    case QGst::EventTag:
      cppClass = new QGst::TagEvent;
      break;
    case QGst::EventBufferSize:
      cppClass = new QGst::BufferSizeEvent;
      break;
    case QGst::EventSinkMessage:
      cppClass = new QGst::SinkMessageEvent;
      break;
    case QGst::EventQos:
      cppClass = new QGst::QosEvent;
      break;
    case QGst::EventSeek:
      cppClass = new QGst::SeekEvent;
      break;
    case QGst::EventNavigation:
      cppClass = new QGst::NavigationEvent;
      break;
    case QGst::EventLatency:
      cppClass = new QGst::LatencyEvent;
      break;
    case QGst::EventStep:
      cppClass = new QGst::StepEvent;
      break;
    default:
      cppClass = new QGst::Event;
      break;
    }
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/ghostpad.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::GhostPad,GST_TYPE_GHOST_PAD)

namespace QGst {
  QGlib::RefCountedObject *GhostPad_new(void *instance)
  {
    QGst::GhostPad *cppClass = new QGst::GhostPad;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/pipeline.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Pipeline,GST_TYPE_PIPELINE)

namespace QGst {
  QGlib::RefCountedObject *Pipeline_new(void *instance)
  {
    QGst::Pipeline *cppClass = new QGst::Pipeline;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/childproxy.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::ChildProxy,GST_TYPE_CHILD_PROXY)

namespace QGst {
  QGlib::RefCountedObject *ChildProxy_new(void *instance)
  {
    QGst::ChildProxy *cppClass = new QGst::ChildProxy;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/pluginfeature.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::PluginFeature,GST_TYPE_PLUGIN_FEATURE)

namespace QGst {
  QGlib::RefCountedObject *PluginFeature_new(void *instance)
  {
    QGst::PluginFeature *cppClass = new QGst::PluginFeature;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/bus.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Bus,GST_TYPE_BUS)

namespace QGst {
  QGlib::RefCountedObject *Bus_new(void *instance)
  {
    QGst::Bus *cppClass = new QGst::Bus;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/structure.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Structure,GST_TYPE_STRUCTURE)

#include "QGst/message.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Message,GST_TYPE_MESSAGE)

namespace QGst {
  QGlib::RefCountedObject *Message_new(void *instance)
  {
    QGst::Message *cppClass = NULL;
    switch(GST_MESSAGE_TYPE(instance)) {
    case QGst::MessageEos:
      cppClass = new QGst::EosMessage;
      break;
    case QGst::MessageError:
      cppClass = new QGst::ErrorMessage;
      break;
    case QGst::MessageWarning:
      cppClass = new QGst::WarningMessage;
      break;
    case QGst::MessageInfo:
      cppClass = new QGst::InfoMessage;
      break;
    case QGst::MessageTag:
      cppClass = new QGst::TagMessage;
      break;
    case QGst::MessageBuffering:
      cppClass = new QGst::BufferingMessage;
      break;
    case QGst::MessageStateChanged:
      cppClass = new QGst::StateChangedMessage;
      break;
    case QGst::MessageStepDone:
      cppClass = new QGst::StepDoneMessage;
      break;
    case QGst::MessageStreamStatus:
      cppClass = new QGst::StreamStatusMessage;
      break;
    case QGst::MessageApplication:
      cppClass = new QGst::ApplicationMessage;
      break;
    case QGst::MessageElement:
      cppClass = new QGst::ElementMessage;
      break;
    case QGst::MessageSegmentDone:
      cppClass = new QGst::SegmentDoneMessage;
      break;
    case QGst::MessageDuration:
      cppClass = new QGst::DurationMessage;
      break;
    case QGst::MessageLatency:
      cppClass = new QGst::LatencyMessage;
      break;
    case QGst::MessageAsyncDone:
      cppClass = new QGst::AsyncDoneMessage;
      break;
    case QGst::MessageRequestState:
      cppClass = new QGst::RequestStateMessage;
      break;
    case QGst::MessageStepStart:
      cppClass = new QGst::StepStartMessage;
      break;
    case QGst::MessageQos:
      cppClass = new QGst::QosMessage;
      break;
    default:
      cppClass = new QGst::Message;
      break;
    }
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/videoorientation.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::VideoOrientation,GST_TYPE_VIDEO_ORIENTATION)

namespace QGst {
  QGlib::RefCountedObject *VideoOrientation_new(void *instance)
  {
    QGst::VideoOrientation *cppClass = new QGst::VideoOrientation;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/elementfactory.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::ElementFactory,GST_TYPE_ELEMENT_FACTORY)

namespace QGst {
  QGlib::RefCountedObject *ElementFactory_new(void *instance)
  {
    QGst::ElementFactory *cppClass = new QGst::ElementFactory;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/clock.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Clock,GST_TYPE_CLOCK)

namespace QGst {
  QGlib::RefCountedObject *Clock_new(void *instance)
  {
    QGst::Clock *cppClass = new QGst::Clock;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/streamvolume.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::StreamVolume,GST_TYPE_STREAM_VOLUME)

namespace QGst {
  QGlib::RefCountedObject *StreamVolume_new(void *instance)
  {
    QGst::StreamVolume *cppClass = new QGst::StreamVolume;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/query.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Query,GST_TYPE_QUERY)

namespace QGst {
  QGlib::RefCountedObject *Query_new(void *instance)
  {
    QGst::Query *cppClass = NULL;
    switch(GST_QUERY_TYPE(instance)) {
    case QGst::QueryPosition:
      cppClass = new QGst::PositionQuery;
      break;
    case QGst::QueryDuration:
      cppClass = new QGst::DurationQuery;
      break;
    case QGst::QueryLatency:
      cppClass = new QGst::LatencyQuery;
      break;
    case QGst::QuerySeeking:
      cppClass = new QGst::SeekingQuery;
      break;
    case QGst::QuerySegment:
      cppClass = new QGst::SegmentQuery;
      break;
    case QGst::QueryConvert:
      cppClass = new QGst::ConvertQuery;
      break;
    case QGst::QueryFormats:
      cppClass = new QGst::FormatsQuery;
      break;
    case QGst::QueryBuffering:
      cppClass = new QGst::BufferingQuery;
      break;
    case QGst::QueryUri:
      cppClass = new QGst::UriQuery;
      break;
    default:
      cppClass = new QGst::Query;
      break;
    }
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/propertyprobe.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::PropertyProbe,GST_TYPE_PROPERTY_PROBE)

namespace QGst {
  QGlib::RefCountedObject *PropertyProbe_new(void *instance)
  {
    QGst::PropertyProbe *cppClass = new QGst::PropertyProbe;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/miniobject.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::MiniObject,GST_TYPE_MINI_OBJECT)

namespace QGst {
  QGlib::RefCountedObject *MiniObject_new(void *instance)
  {
    QGst::MiniObject *cppClass = new QGst::MiniObject;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/xoverlay.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::XOverlay,GST_TYPE_X_OVERLAY)

namespace QGst {
  QGlib::RefCountedObject *XOverlay_new(void *instance)
  {
    QGst::XOverlay *cppClass = new QGst::XOverlay;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/colorbalance.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::ColorBalanceChannel,GST_TYPE_COLOR_BALANCE_CHANNEL)

REGISTER_TYPE_IMPLEMENTATION(QGst::ColorBalance,GST_TYPE_COLOR_BALANCE)

namespace QGst {
  QGlib::RefCountedObject *ColorBalanceChannel_new(void *instance)
  {
    QGst::ColorBalanceChannel *cppClass = new QGst::ColorBalanceChannel;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

namespace QGst {
  QGlib::RefCountedObject *ColorBalance_new(void *instance)
  {
    QGst::ColorBalance *cppClass = new QGst::ColorBalance;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/taglist.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::TagList,GST_TYPE_TAG_LIST)

#include "QGst/pad.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Pad,GST_TYPE_PAD)

namespace QGst {
  QGlib::RefCountedObject *Pad_new(void *instance)
  {
    QGst::Pad *cppClass = new QGst::Pad;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/enums.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::MiniObjectFlags,GST_TYPE_MINI_OBJECT_FLAGS)

REGISTER_TYPE_IMPLEMENTATION(QGst::ObjectFlags,GST_TYPE_OBJECT_FLAGS)

REGISTER_TYPE_IMPLEMENTATION(QGst::State,GST_TYPE_STATE)

REGISTER_TYPE_IMPLEMENTATION(QGst::StateChange,GST_TYPE_STATE_CHANGE)

REGISTER_TYPE_IMPLEMENTATION(QGst::StateChangeReturn,GST_TYPE_STATE_CHANGE_RETURN)

REGISTER_TYPE_IMPLEMENTATION(QGst::PadDirection,GST_TYPE_PAD_DIRECTION)

REGISTER_TYPE_IMPLEMENTATION(QGst::PadFlags,GST_TYPE_PAD_FLAGS)

REGISTER_TYPE_IMPLEMENTATION(QGst::PadLinkReturn,GST_TYPE_PAD_LINK_RETURN)

REGISTER_TYPE_IMPLEMENTATION(QGst::FlowReturn,GST_TYPE_FLOW_RETURN)

REGISTER_TYPE_IMPLEMENTATION(QGst::ActivateMode,GST_TYPE_ACTIVATE_MODE)

REGISTER_TYPE_IMPLEMENTATION(QGst::Rank,GST_TYPE_RANK)

REGISTER_TYPE_IMPLEMENTATION(QGst::MessageType,GST_TYPE_MESSAGE_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::ParseError,GST_TYPE_PARSE_ERROR)

REGISTER_TYPE_IMPLEMENTATION(QGst::UriType,GST_TYPE_URI_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::BufferingMode,GST_TYPE_BUFFERING_MODE)

REGISTER_TYPE_IMPLEMENTATION(QGst::Format,GST_TYPE_FORMAT)

REGISTER_TYPE_IMPLEMENTATION(QGst::StreamStatusType,GST_TYPE_STREAM_STATUS_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::StreamVolumeFormat,GST_TYPE_STREAM_VOLUME_FORMAT)

REGISTER_TYPE_IMPLEMENTATION(QGst::ColorBalanceType,GST_TYPE_COLOR_BALANCE_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::QueryType,GST_TYPE_QUERY_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::BufferFlags,GST_TYPE_BUFFER_FLAG)

REGISTER_TYPE_IMPLEMENTATION(QGst::EventTypeFlags,GST_TYPE_EVENT_TYPE_FLAGS)

REGISTER_TYPE_IMPLEMENTATION(QGst::EventType,GST_TYPE_EVENT_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::SeekFlags,GST_TYPE_SEEK_FLAGS)

REGISTER_TYPE_IMPLEMENTATION(QGst::SeekType,GST_TYPE_SEEK_TYPE)

REGISTER_TYPE_IMPLEMENTATION(QGst::TagMergeMode,GST_TYPE_TAG_MERGE_MODE)

REGISTER_TYPE_IMPLEMENTATION(QGst::TagFlags,GST_TYPE_TAG_FLAG)

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(MiniObjectFlagReadonly) == static_cast<int>(GST_MINI_OBJECT_FLAG_READONLY));
    BOOST_STATIC_ASSERT(static_cast<int>(MiniObjectFlagLast) == static_cast<int>(GST_MINI_OBJECT_FLAG_LAST));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(ObjectDisposing) == static_cast<int>(GST_OBJECT_DISPOSING));
    BOOST_STATIC_ASSERT(static_cast<int>(ObjectFloating) == static_cast<int>(GST_OBJECT_FLOATING));
    BOOST_STATIC_ASSERT(static_cast<int>(ObjectFlagLast) == static_cast<int>(GST_OBJECT_FLAG_LAST));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(StateVoidPending) == static_cast<int>(GST_STATE_VOID_PENDING));
    BOOST_STATIC_ASSERT(static_cast<int>(StateNull) == static_cast<int>(GST_STATE_NULL));
    BOOST_STATIC_ASSERT(static_cast<int>(StateReady) == static_cast<int>(GST_STATE_READY));
    BOOST_STATIC_ASSERT(static_cast<int>(StatePaused) == static_cast<int>(GST_STATE_PAUSED));
    BOOST_STATIC_ASSERT(static_cast<int>(StatePlaying) == static_cast<int>(GST_STATE_PLAYING));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeNullToReady) == static_cast<int>(GST_STATE_CHANGE_NULL_TO_READY));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeReadyToPaused) == static_cast<int>(GST_STATE_CHANGE_READY_TO_PAUSED));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangePausedToPlaying) == static_cast<int>(GST_STATE_CHANGE_PAUSED_TO_PLAYING));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangePlayingToPaused) == static_cast<int>(GST_STATE_CHANGE_PLAYING_TO_PAUSED));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangePausedToReady) == static_cast<int>(GST_STATE_CHANGE_PAUSED_TO_READY));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeReadyToNull) == static_cast<int>(GST_STATE_CHANGE_READY_TO_NULL));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeFailure) == static_cast<int>(GST_STATE_CHANGE_FAILURE));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeSuccess) == static_cast<int>(GST_STATE_CHANGE_SUCCESS));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeAsync) == static_cast<int>(GST_STATE_CHANGE_ASYNC));
    BOOST_STATIC_ASSERT(static_cast<int>(StateChangeNoPreroll) == static_cast<int>(GST_STATE_CHANGE_NO_PREROLL));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(PadUnknown) == static_cast<int>(GST_PAD_UNKNOWN));
    BOOST_STATIC_ASSERT(static_cast<int>(PadSrc) == static_cast<int>(GST_PAD_SRC));
    BOOST_STATIC_ASSERT(static_cast<int>(PadSink) == static_cast<int>(GST_PAD_SINK));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(PadBlocked) == static_cast<int>(GST_PAD_BLOCKED));
    BOOST_STATIC_ASSERT(static_cast<int>(PadFlushing) == static_cast<int>(GST_PAD_FLUSHING));
    BOOST_STATIC_ASSERT(static_cast<int>(PadInGetCaps) == static_cast<int>(GST_PAD_IN_GETCAPS));
    BOOST_STATIC_ASSERT(static_cast<int>(PadInSetCaps) == static_cast<int>(GST_PAD_IN_SETCAPS));
    BOOST_STATIC_ASSERT(static_cast<int>(PadBlocking) == static_cast<int>(GST_PAD_BLOCKING));
    BOOST_STATIC_ASSERT(static_cast<int>(PadFlagLast) == static_cast<int>(GST_PAD_FLAG_LAST));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkOk) == static_cast<int>(GST_PAD_LINK_OK));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkWrongHierarchy) == static_cast<int>(GST_PAD_LINK_WRONG_HIERARCHY));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkWasLinked) == static_cast<int>(GST_PAD_LINK_WAS_LINKED));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkWrongDirection) == static_cast<int>(GST_PAD_LINK_WRONG_DIRECTION));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkNoFormat) == static_cast<int>(GST_PAD_LINK_NOFORMAT));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkNoSched) == static_cast<int>(GST_PAD_LINK_NOSCHED));
    BOOST_STATIC_ASSERT(static_cast<int>(PadLinkRefused) == static_cast<int>(GST_PAD_LINK_REFUSED));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(FlowCustomSuccess) == static_cast<int>(GST_FLOW_CUSTOM_SUCCESS));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowResend) == static_cast<int>(GST_FLOW_RESEND));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowOk) == static_cast<int>(GST_FLOW_OK));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowNotLinked) == static_cast<int>(GST_FLOW_NOT_LINKED));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowWrongState) == static_cast<int>(GST_FLOW_WRONG_STATE));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowUnexpected) == static_cast<int>(GST_FLOW_UNEXPECTED));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowNotNegotiated) == static_cast<int>(GST_FLOW_NOT_NEGOTIATED));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowError) == static_cast<int>(GST_FLOW_ERROR));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowNotSupported) == static_cast<int>(GST_FLOW_NOT_SUPPORTED));
    BOOST_STATIC_ASSERT(static_cast<int>(FlowCustomError) == static_cast<int>(GST_FLOW_CUSTOM_ERROR));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(ActivateNone) == static_cast<int>(GST_ACTIVATE_NONE));
    BOOST_STATIC_ASSERT(static_cast<int>(ActivatePush) == static_cast<int>(GST_ACTIVATE_PUSH));
    BOOST_STATIC_ASSERT(static_cast<int>(ActivatePull) == static_cast<int>(GST_ACTIVATE_PULL));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(RankNone) == static_cast<int>(GST_RANK_NONE));
    BOOST_STATIC_ASSERT(static_cast<int>(RankMarginal) == static_cast<int>(GST_RANK_MARGINAL));
    BOOST_STATIC_ASSERT(static_cast<int>(RankSecondary) == static_cast<int>(GST_RANK_SECONDARY));
    BOOST_STATIC_ASSERT(static_cast<int>(RankPrimary) == static_cast<int>(GST_RANK_PRIMARY));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(MessageUnknown) == static_cast<int>(GST_MESSAGE_UNKNOWN));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageEos) == static_cast<int>(GST_MESSAGE_EOS));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageError) == static_cast<int>(GST_MESSAGE_ERROR));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageWarning) == static_cast<int>(GST_MESSAGE_WARNING));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageInfo) == static_cast<int>(GST_MESSAGE_INFO));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageTag) == static_cast<int>(GST_MESSAGE_TAG));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageBuffering) == static_cast<int>(GST_MESSAGE_BUFFERING));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStateChanged) == static_cast<int>(GST_MESSAGE_STATE_CHANGED));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStateDirty) == static_cast<int>(GST_MESSAGE_STATE_DIRTY));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStepDone) == static_cast<int>(GST_MESSAGE_STEP_DONE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageClockProvide) == static_cast<int>(GST_MESSAGE_CLOCK_PROVIDE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageClockLost) == static_cast<int>(GST_MESSAGE_CLOCK_LOST));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageNewClock) == static_cast<int>(GST_MESSAGE_NEW_CLOCK));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStructureChange) == static_cast<int>(GST_MESSAGE_STRUCTURE_CHANGE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStreamStatus) == static_cast<int>(GST_MESSAGE_STREAM_STATUS));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageApplication) == static_cast<int>(GST_MESSAGE_APPLICATION));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageElement) == static_cast<int>(GST_MESSAGE_ELEMENT));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageSegmentStart) == static_cast<int>(GST_MESSAGE_SEGMENT_START));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageSegmentDone) == static_cast<int>(GST_MESSAGE_SEGMENT_DONE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageDuration) == static_cast<int>(GST_MESSAGE_DURATION));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageLatency) == static_cast<int>(GST_MESSAGE_LATENCY));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageAsyncStart) == static_cast<int>(GST_MESSAGE_ASYNC_START));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageAsyncDone) == static_cast<int>(GST_MESSAGE_ASYNC_DONE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageRequestState) == static_cast<int>(GST_MESSAGE_REQUEST_STATE));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageStepStart) == static_cast<int>(GST_MESSAGE_STEP_START));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageQos) == static_cast<int>(GST_MESSAGE_QOS));
    BOOST_STATIC_ASSERT(static_cast<int>(MessageAny) == static_cast<int>(GST_MESSAGE_ANY));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorSyntax) == static_cast<int>(GST_PARSE_ERROR_SYNTAX));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorNoSuchElement) == static_cast<int>(GST_PARSE_ERROR_NO_SUCH_ELEMENT));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorNoSuchProperty) == static_cast<int>(GST_PARSE_ERROR_NO_SUCH_PROPERTY));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorLink) == static_cast<int>(GST_PARSE_ERROR_LINK));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorCouldNotSetProperty) == static_cast<int>(GST_PARSE_ERROR_COULD_NOT_SET_PROPERTY));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorEmptyBin) == static_cast<int>(GST_PARSE_ERROR_EMPTY_BIN));
    BOOST_STATIC_ASSERT(static_cast<int>(ParseErrorEmpty) == static_cast<int>(GST_PARSE_ERROR_EMPTY));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(UriUnknown) == static_cast<int>(GST_URI_UNKNOWN));
    BOOST_STATIC_ASSERT(static_cast<int>(UriSink) == static_cast<int>(GST_URI_SINK));
    BOOST_STATIC_ASSERT(static_cast<int>(UriSrc) == static_cast<int>(GST_URI_SRC));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(BufferingStream) == static_cast<int>(GST_BUFFERING_STREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferingDownload) == static_cast<int>(GST_BUFFERING_DOWNLOAD));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferingTimeshift) == static_cast<int>(GST_BUFFERING_TIMESHIFT));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferingLive) == static_cast<int>(GST_BUFFERING_LIVE));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(FormatUndefined) == static_cast<int>(GST_FORMAT_UNDEFINED));
    BOOST_STATIC_ASSERT(static_cast<int>(FormatDefault) == static_cast<int>(GST_FORMAT_DEFAULT));
    BOOST_STATIC_ASSERT(static_cast<int>(FormatBytes) == static_cast<int>(GST_FORMAT_BYTES));
    BOOST_STATIC_ASSERT(static_cast<int>(FormatTime) == static_cast<int>(GST_FORMAT_TIME));
    BOOST_STATIC_ASSERT(static_cast<int>(FormatBuffers) == static_cast<int>(GST_FORMAT_BUFFERS));
    BOOST_STATIC_ASSERT(static_cast<int>(FormatPercent) == static_cast<int>(GST_FORMAT_PERCENT));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeCreate) == static_cast<int>(GST_STREAM_STATUS_TYPE_CREATE));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeEnter) == static_cast<int>(GST_STREAM_STATUS_TYPE_ENTER));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeLeave) == static_cast<int>(GST_STREAM_STATUS_TYPE_LEAVE));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeDestroy) == static_cast<int>(GST_STREAM_STATUS_TYPE_DESTROY));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeStart) == static_cast<int>(GST_STREAM_STATUS_TYPE_START));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypePause) == static_cast<int>(GST_STREAM_STATUS_TYPE_PAUSE));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamStatusTypeStop) == static_cast<int>(GST_STREAM_STATUS_TYPE_STOP));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(StreamVolumeFormatLinear) == static_cast<int>(GST_STREAM_VOLUME_FORMAT_LINEAR));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamVolumeFormatCubic) == static_cast<int>(GST_STREAM_VOLUME_FORMAT_CUBIC));
    BOOST_STATIC_ASSERT(static_cast<int>(StreamVolumeFormatDb) == static_cast<int>(GST_STREAM_VOLUME_FORMAT_DB));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(ColorBalanceHardware) == static_cast<int>(GST_COLOR_BALANCE_HARDWARE));
    BOOST_STATIC_ASSERT(static_cast<int>(ColorBalanceSoftware) == static_cast<int>(GST_COLOR_BALANCE_SOFTWARE));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(QueryNone) == static_cast<int>(GST_QUERY_NONE));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryPosition) == static_cast<int>(GST_QUERY_POSITION));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryDuration) == static_cast<int>(GST_QUERY_DURATION));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryLatency) == static_cast<int>(GST_QUERY_LATENCY));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryJitter) == static_cast<int>(GST_QUERY_JITTER));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryRate) == static_cast<int>(GST_QUERY_RATE));
    BOOST_STATIC_ASSERT(static_cast<int>(QuerySeeking) == static_cast<int>(GST_QUERY_SEEKING));
    BOOST_STATIC_ASSERT(static_cast<int>(QuerySegment) == static_cast<int>(GST_QUERY_SEGMENT));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryConvert) == static_cast<int>(GST_QUERY_CONVERT));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryFormats) == static_cast<int>(GST_QUERY_FORMATS));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryBuffering) == static_cast<int>(GST_QUERY_BUFFERING));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryCustom) == static_cast<int>(GST_QUERY_CUSTOM));
    BOOST_STATIC_ASSERT(static_cast<int>(QueryUri) == static_cast<int>(GST_QUERY_URI));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagReadOnly) == static_cast<int>(GST_BUFFER_FLAG_READONLY));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagPreroll) == static_cast<int>(GST_BUFFER_FLAG_PREROLL));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagDiscont) == static_cast<int>(GST_BUFFER_FLAG_DISCONT));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagInCaps) == static_cast<int>(GST_BUFFER_FLAG_IN_CAPS));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagGap) == static_cast<int>(GST_BUFFER_FLAG_GAP));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagDeltaUnit) == static_cast<int>(GST_BUFFER_FLAG_DELTA_UNIT));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagMedia1) == static_cast<int>(GST_BUFFER_FLAG_MEDIA1));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagMedia2) == static_cast<int>(GST_BUFFER_FLAG_MEDIA2));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagMedia3) == static_cast<int>(GST_BUFFER_FLAG_MEDIA3));
    BOOST_STATIC_ASSERT(static_cast<int>(BufferFlagLast) == static_cast<int>(GST_BUFFER_FLAG_LAST));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(EventTypeUpstream) == static_cast<int>(GST_EVENT_TYPE_UPSTREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(EventTypeDownstream) == static_cast<int>(GST_EVENT_TYPE_DOWNSTREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(EventTypeSerialized) == static_cast<int>(GST_EVENT_TYPE_SERIALIZED));
    BOOST_STATIC_ASSERT(static_cast<int>(EventTypeBoth) == static_cast<int>(GST_EVENT_TYPE_BOTH));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(EventUnknown) == static_cast<int>(GST_EVENT_UNKNOWN));
    BOOST_STATIC_ASSERT(static_cast<int>(EventFlushStart) == static_cast<int>(GST_EVENT_FLUSH_START));
    BOOST_STATIC_ASSERT(static_cast<int>(EventFlushStop) == static_cast<int>(GST_EVENT_FLUSH_STOP));
    BOOST_STATIC_ASSERT(static_cast<int>(EventEos) == static_cast<int>(GST_EVENT_EOS));
    BOOST_STATIC_ASSERT(static_cast<int>(EventNewSegment) == static_cast<int>(GST_EVENT_NEWSEGMENT));
    BOOST_STATIC_ASSERT(static_cast<int>(EventTag) == static_cast<int>(GST_EVENT_TAG));
    BOOST_STATIC_ASSERT(static_cast<int>(EventBufferSize) == static_cast<int>(GST_EVENT_BUFFERSIZE));
    BOOST_STATIC_ASSERT(static_cast<int>(EventSinkMessage) == static_cast<int>(GST_EVENT_SINK_MESSAGE));
    BOOST_STATIC_ASSERT(static_cast<int>(EventQos) == static_cast<int>(GST_EVENT_QOS));
    BOOST_STATIC_ASSERT(static_cast<int>(EventSeek) == static_cast<int>(GST_EVENT_SEEK));
    BOOST_STATIC_ASSERT(static_cast<int>(EventNavigation) == static_cast<int>(GST_EVENT_NAVIGATION));
    BOOST_STATIC_ASSERT(static_cast<int>(EventLatency) == static_cast<int>(GST_EVENT_LATENCY));
    BOOST_STATIC_ASSERT(static_cast<int>(EventStep) == static_cast<int>(GST_EVENT_STEP));
    BOOST_STATIC_ASSERT(static_cast<int>(EventCustomUpstream) == static_cast<int>(GST_EVENT_CUSTOM_UPSTREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(EventCustomDownstream) == static_cast<int>(GST_EVENT_CUSTOM_DOWNSTREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(EventCustomDownstreamOob) == static_cast<int>(GST_EVENT_CUSTOM_DOWNSTREAM_OOB));
    BOOST_STATIC_ASSERT(static_cast<int>(EventCustomBoth) == static_cast<int>(GST_EVENT_CUSTOM_BOTH));
    BOOST_STATIC_ASSERT(static_cast<int>(EventCustomBothOob) == static_cast<int>(GST_EVENT_CUSTOM_BOTH_OOB));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagNone) == static_cast<int>(GST_SEEK_FLAG_NONE));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagFlush) == static_cast<int>(GST_SEEK_FLAG_FLUSH));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagAccurate) == static_cast<int>(GST_SEEK_FLAG_ACCURATE));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagKeyUnit) == static_cast<int>(GST_SEEK_FLAG_KEY_UNIT));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagSegment) == static_cast<int>(GST_SEEK_FLAG_SEGMENT));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekFlagSkip) == static_cast<int>(GST_SEEK_FLAG_SKIP));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(SeekTypeNone) == static_cast<int>(GST_SEEK_TYPE_NONE));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekTypeCur) == static_cast<int>(GST_SEEK_TYPE_CUR));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekTypeSet) == static_cast<int>(GST_SEEK_TYPE_SET));
    BOOST_STATIC_ASSERT(static_cast<int>(SeekTypeEnd) == static_cast<int>(GST_SEEK_TYPE_END));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeUndefined) == static_cast<int>(GST_TAG_MERGE_UNDEFINED));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeReplaceAll) == static_cast<int>(GST_TAG_MERGE_REPLACE_ALL));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeReplace) == static_cast<int>(GST_TAG_MERGE_REPLACE));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeAppend) == static_cast<int>(GST_TAG_MERGE_APPEND));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergePrepend) == static_cast<int>(GST_TAG_MERGE_PREPEND));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeKeep) == static_cast<int>(GST_TAG_MERGE_KEEP));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeKeepAll) == static_cast<int>(GST_TAG_MERGE_KEEP_ALL));
    BOOST_STATIC_ASSERT(static_cast<int>(TagMergeCount) == static_cast<int>(GST_TAG_MERGE_COUNT));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(TagFlagUndefined) == static_cast<int>(GST_TAG_FLAG_UNDEFINED));
    BOOST_STATIC_ASSERT(static_cast<int>(TagFlagMeta) == static_cast<int>(GST_TAG_FLAG_META));
    BOOST_STATIC_ASSERT(static_cast<int>(TagFlagEncoded) == static_cast<int>(GST_TAG_FLAG_ENCODED));
    BOOST_STATIC_ASSERT(static_cast<int>(TagFlagDecoded) == static_cast<int>(GST_TAG_FLAG_DECODED));
    BOOST_STATIC_ASSERT(static_cast<int>(TagFlagCount) == static_cast<int>(GST_TAG_FLAG_COUNT));
}

namespace QGst {
    BOOST_STATIC_ASSERT(static_cast<int>(AppStreamTypeStream) == static_cast<int>(GST_APP_STREAM_TYPE_STREAM));
    BOOST_STATIC_ASSERT(static_cast<int>(AppStreamTypeSeekable) == static_cast<int>(GST_APP_STREAM_TYPE_SEEKABLE));
    BOOST_STATIC_ASSERT(static_cast<int>(AppStreamTypeRandomAccess) == static_cast<int>(GST_APP_STREAM_TYPE_RANDOM_ACCESS));
}

#include "QGst/buffer.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Buffer,GST_TYPE_BUFFER)

namespace QGst {
  QGlib::RefCountedObject *Buffer_new(void *instance)
  {
    QGst::Buffer *cppClass = new QGst::Buffer;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/object.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Object,GST_TYPE_OBJECT)

namespace QGst {
  QGlib::RefCountedObject *Object_new(void *instance)
  {
    QGst::Object *cppClass = new QGst::Object;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/urihandler.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::UriHandler,GST_TYPE_URI_HANDLER)

namespace QGst {
  QGlib::RefCountedObject *UriHandler_new(void *instance)
  {
    QGst::UriHandler *cppClass = new QGst::UriHandler;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/parse.h"

#include "QGst/caps.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Caps,GST_TYPE_CAPS)

namespace QGst {
  QGlib::RefCountedObject *Caps_new(void *instance)
  {
    QGst::Caps *cppClass = new QGst::Caps;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/structs.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Fourcc,GST_TYPE_FOURCC)

REGISTER_TYPE_IMPLEMENTATION(QGst::Fraction,GST_TYPE_FRACTION)

REGISTER_TYPE_IMPLEMENTATION(QGst::IntRange,GST_TYPE_INT_RANGE)

REGISTER_TYPE_IMPLEMENTATION(QGst::Int64Range,GST_TYPE_INT64_RANGE)

REGISTER_TYPE_IMPLEMENTATION(QGst::DoubleRange,GST_TYPE_DOUBLE_RANGE)

REGISTER_TYPE_IMPLEMENTATION(QGst::FractionRange,GST_TYPE_FRACTION_RANGE)

#include "QGst/element.h"

REGISTER_TYPE_IMPLEMENTATION(QGst::Element,GST_TYPE_ELEMENT)

namespace QGst {
  QGlib::RefCountedObject *Element_new(void *instance)
  {
    QGst::Element *cppClass = new QGst::Element;
    cppClass->m_object = instance;
    return cppClass;
  }
} //namespace QGst

#include "QGst/objectstore_p.h"

namespace QGst {
namespace Private {
  void registerWrapperConstructors()
  {
    QGlib::Quark q = g_quark_from_static_string("QGlib__wrapper_constructor");
    QGlib::GetType<BufferList>().setQuarkData(q, reinterpret_cast<void*>(&BufferList_new));
    QGlib::GetType<Bin>().setQuarkData(q, reinterpret_cast<void*>(&Bin_new));
    QGlib::GetType<Event>().setQuarkData(q, reinterpret_cast<void*>(&Event_new));
    QGlib::GetType<GhostPad>().setQuarkData(q, reinterpret_cast<void*>(&GhostPad_new));
    QGlib::GetType<Pipeline>().setQuarkData(q, reinterpret_cast<void*>(&Pipeline_new));
    QGlib::GetType<ChildProxy>().setQuarkData(q, reinterpret_cast<void*>(&ChildProxy_new));
    QGlib::GetType<PluginFeature>().setQuarkData(q, reinterpret_cast<void*>(&PluginFeature_new));
    QGlib::GetType<Bus>().setQuarkData(q, reinterpret_cast<void*>(&Bus_new));
    QGlib::GetType<Message>().setQuarkData(q, reinterpret_cast<void*>(&Message_new));
    QGlib::GetType<VideoOrientation>().setQuarkData(q, reinterpret_cast<void*>(&VideoOrientation_new));
    QGlib::GetType<ElementFactory>().setQuarkData(q, reinterpret_cast<void*>(&ElementFactory_new));
    QGlib::GetType<Clock>().setQuarkData(q, reinterpret_cast<void*>(&Clock_new));
    QGlib::GetType<StreamVolume>().setQuarkData(q, reinterpret_cast<void*>(&StreamVolume_new));
    QGlib::GetType<Query>().setQuarkData(q, reinterpret_cast<void*>(&Query_new));
    QGlib::GetType<PropertyProbe>().setQuarkData(q, reinterpret_cast<void*>(&PropertyProbe_new));
    QGlib::GetType<MiniObject>().setQuarkData(q, reinterpret_cast<void*>(&MiniObject_new));
    QGlib::GetType<XOverlay>().setQuarkData(q, reinterpret_cast<void*>(&XOverlay_new));
    QGlib::GetType<ColorBalanceChannel>().setQuarkData(q, reinterpret_cast<void*>(&ColorBalanceChannel_new));
    QGlib::GetType<ColorBalance>().setQuarkData(q, reinterpret_cast<void*>(&ColorBalance_new));
    QGlib::GetType<Pad>().setQuarkData(q, reinterpret_cast<void*>(&Pad_new));
    QGlib::GetType<Buffer>().setQuarkData(q, reinterpret_cast<void*>(&Buffer_new));
    QGlib::GetType<Object>().setQuarkData(q, reinterpret_cast<void*>(&Object_new));
    QGlib::GetType<UriHandler>().setQuarkData(q, reinterpret_cast<void*>(&UriHandler_new));
    QGlib::GetType<Caps>().setQuarkData(q, reinterpret_cast<void*>(&Caps_new));
    QGlib::GetType<Element>().setQuarkData(q, reinterpret_cast<void*>(&Element_new));
  }
} //namespace Private
} //namespace QGst

